// For odd length linked list
// -----------------------------------------------
// 10->30->40->50->60->NULL
// head
// slow
// fast

// ------------------------------------------------ 

// slow = slow->next; --slow ko ek se badhya
// fast = fast->next->next; --fast ko do se badhya
// 10->30->40->50->60->NULL
//    slow
//        fast

// 10->30->40->50->60->NULL
//        slow
//                fast 

//condition to stop when   **********(fast->next != NULL)*************
// ----------------------------------------------------------------------------

// For even length linked list

// 10->30->40->50->60->70->NULL
// head
// slow 
// fast

// ------------------------------------------------ 

// slow = slow->next; --slow ko ek se badhya
// fast = fast->next->next; --fast ko do se badhya
// 10->30->40->50->60->70->NULL
//    slow
//        fast

// 10->30->40->50->60->70->NULL
//         slow
//                 fast    

// 10->30->40->50->60->70->NULL
//            slow
//                         fast 

//condition to stop when   ***********(fast = NULL)************

// --------------------------------------------------------------------------------------------
// ListNode* slow = head;
//     ListNode* fast = head;

//   while(fast->next!=NULL && fast!= NULL){ //null pointer error kyuki wo next ko check karha
//         slow = slow->next;
//         fast = fast->next->next;
//     }

// --------------------------------------------------------------------------------------------------
//correct approach

//   ListNode* slow = head;
//     ListNode* fast = head;

//     while( fast!= NULL && fast->next!=NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     return slow;


//--------------------left middle of linked list (even)--------------------------------

// 10->30->40->50->NULL
// head
// slow
// fast

// 10->30->40->50->NULL

//    slow
//        fast

//     while(  fast->next->next!=NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//     }


