/*
 * @lc app=leetcode id=2 lang=c
 *
 * [2] Add Two Numbers
 *
 * https://leetcode.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (30.72%)
 * Total Accepted:    793K
 * Total Submissions: 2.6M
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * You are given two non-empty linked lists representing two non-negative
 * integers. The digits are stored in reverse order and each of their nodes
 * contain a single digit. Add the two numbers and return it as a linked list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the
 * number 0 itself.
 * 
 * Example:
 * 
 * 
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807.
 * 
 * 
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* p1 = l1;
    struct ListNode* p2 = l2;
    struct ListNode* res = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p = res;
    int temp = 0;
    while(p1 != NULL || p2 != NULL){

        if (p1 != NULL) {
            temp += p1->val;
            p1 = p1->next;
        }

        if (p2 != NULL) {
            temp += p2->val;
            p2 = p2->next;
        }
        
        res->val = temp % 10;
        res = res->next;
        res = (struct ListNode*)malloc(sizeof(struct ListNode));
        temp /= 10;
    }
    // res = NULL;
    return p;
    

}

