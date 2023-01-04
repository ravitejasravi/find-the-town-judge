# find-the-town-judge

In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge.

If the town judge exists, then:

The town judge trusts nobody.<br>
Everybody (except for the town judge) trusts the town judge.<br>
There is exactly one person that satisfies properties 1 and 2.<br>
You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person labeled bi.

Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.

Example 1:

Input: n = 2, trust = [[1,2]]<br>
Output: 2<br>

Example 2:

Input: n = 3, trust = [[1,3],[2,3]]<br>
Output: 3

Example 3:

Input: n = 3, trust = [[1,3],[2,3],[3,1]]<br>
Output: -1
