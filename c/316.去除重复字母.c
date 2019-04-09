/*
 * @lc app=leetcode.cn id=316 lang=c
 *
 * [316] 去除重复字母
 *
 * https://leetcode-cn.com/problems/remove-duplicate-letters/description/
 *
 * algorithms
 * Hard (28.69%)
 * Total Accepted:    938
 * Total Submissions: 3.2K
 * Testcase Example:  '"bcabc"'
 *
 * 给定一个仅包含小写字母的字符串，去除字符串中重复的字母，使得每个字母只出现一次。需保证返回结果的字典序最小（要求不能打乱其他字符的相对位置）。
 * 
 * 示例 1:
 * 
 * 输入: "bcabc"
 * 输出: "abc"
 * 
 * 
 * 示例 2:
 * 
 * 输入: "cbacdcbc"
 * 输出: "acdb"
 * 
 */
char* removeDuplicateLetters(char* s) {
    int count[26] = {0};
    int writed[26] = {0};
    for(int i = 0; s[i]; i++) // 计算所有字母出现次数
        count[s[i] - 'a']++;

    //初始化空字符
    char* res = (char*)malloc(sizeof(char) * 27);
    int index = 0;
    res[index] = 0;

    for(int i = 0; s[i]; i++) {
        count[s[i] - 'a']--;
        if(writed[s[i] - 'a']) // 字母已经被写入，跳过
            continue;

        // 字母未被写入，那么已经写入的字母，如果字典序大于s[i]，且count不等于0,说明后面一定还会出现
        // 向前删除所有这些字母，并将其写入标志置为0
        while(index > 0 && s[i] < res[index-1] && count[res[index-1] - 'a'])
            writed[res[--index] - 'a'] = 0;
  
        res[index++] = s[i];
        writed[s[i] - 'a'] = 1;

    }
    res[index] = 0;
    return res;
}

