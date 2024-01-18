/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        
        if(lists.length==0){return null;}

        if(lists.length==1){return lists[0];}

        ListNode initialList = lists[0];

        for(int i=1;i<lists.length;i++){
            initialList = mergeTwoList(initialList,lists[i]);
        }

        return initialList;

    }

    public ListNode mergeTwoList(ListNode initialList , ListNode mergeList){

        ListNode i = initialList;
        ListNode j = mergeList;
        ListNode newList = new ListNode(100);
        ListNode temp = newList;

        while(i !=null && j!=null){

            if(i.val<j.val){
                ListNode a = new ListNode(i.val);
                temp.next = a;
                temp = a;
                i = i.next;
            }else{
                ListNode a = new ListNode(j.val);
                temp.next = a;
                temp = a;
                j=j.next;
            }

        }

        if(i==null){
            temp.next = j;
        }else{
            temp.next = i;
        }


        return newList.next;

    }

}