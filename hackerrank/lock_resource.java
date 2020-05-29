class Node {
   boolean isLocked;
   Node parent;
   Node[] children;
   int lockedDescendants;
   boolean mutex;
   
   public boolean isLocked() {
        return isLocked;
   }
   
   
   public void wait(Node current){
       while(current.mutex);
       current.mutex = true;
   }
   
    public void signal(Node current){
       current.mutex = false;
   }
    
    public void lock() {
       wait(this);
       
       if(!isLocked && lockedDescendants <= 0 && !lockedAncestorExists()) {
          incrementAncestors();
          isLocked = true;
       }
       
       signal(this);
    }
    
    private boolean lockedAncestorExists() {
       Node current = parent;
       while(current != null) {
          if(current.isLocked) {
             return true;
          } else {
             current = current.parent;
          }
       }
       return false;
    }
    
    private void incrementAncestors() {
       Node current = parent;
       while(current != null) {
          current.lockedDescendants++;
          current = current.parent;
       }
    }
    
    private void decrementAncestors() {
       Node current = parent;
       while(current != null) {
          current.lockedDescendants--;
          current = current.parent;
       }
    }
       
    public void unlock() {
       if(isLocked) {
          isLocked = false;
          decrementAncestors();
       }
    }