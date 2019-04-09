/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 *
 * https://leetcode-cn.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (32.55%)
 * Total Accepted:    65.2K
 * Total Submissions: 200.3K
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * 编写一个函数来查找字符串数组中的最长公共前缀。
 * 
 * 如果不存在公共前缀，返回空字符串 ""。
 * 
 * 示例 1:
 * 
 * 输入: ["flower","flow","flight"]
 * 输出: "fl"
 * 
 * 
 * 示例 2:
 * 
 * 输入: ["dog","racecar","car"]
 * 输出: ""
 * 解释: 输入不存在公共前缀。
 * 
 * 
 * 说明:
 * 
 * 所有输入只包含小写字母 a-z 。
 * 
 */
char* longestCommonPrefix(char** strs, int strsSize) {
    int returnSize = 0;
    char temp;
    bool flag = strsSize && strs[0][0];
    while(flag && strs[0][returnSize]) {
        temp = strs[0][returnSize];
        for(int i = 1; i < strsSize; i++)
            if (strs[i][returnSize] != temp) {
                flag = 0;
                break;
            }
        returnSize += flag;
    }
    char *res = (char*)malloc(sizeof(char) * (returnSize+1));

    for(int i = 0; i < returnSize; i++)
        res[i] = strs[0][i];
    res[returnSize] = '\0';
    return res;
}

