 class ListNode {
   int val;
   ListNode next;
   ListNode() {}
   ListNode(int val) { this.val = val; }
   ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 }

 class Solution {
    public ListNode deleteDuplicates(ListNode head) {
      if(head == null || head.next == null) {
        return head;
      }
      ListNode dummy = new ListNode(0);
        dummy.next = head;
        ListNode prev = dummy, iter = head;
          
        while(iter != null) {
            while(iter.next != null && iter.val == iter.next.val) {
                iter = iter.next;
            }  
            if(prev.next == iter) {
                prev = prev.next;
            }
            else {
                prev.next = iter.next;
            }
            iter = iter.next;
        }
        
        return dummy.next;
    }
}

class Main {
  public static void main(String[] args) {
    ListNode head = new ListNode(1);
    head.next = new ListNode(2);
    head.next.next = new ListNode(3);
    head.next.next.next = new ListNode(3);
    head.next.next.next.next = new ListNode(4);
    Solution s = new Solution();
    ListNode newHead = s.deleteDuplicates(head);
    while(newHead != null) {
      if(newHead.next != null) {
        System.out.print(newHead.val + "->");
      } 
      else {
        System.out.println(newHead.val);
      }
      newHead = newHead.next;
    }
  }
}
