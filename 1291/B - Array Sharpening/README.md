<h2><a href="https://codeforces.com/contest/1291/problem/B" target="_blank" rel="noopener noreferrer">1291B — Array Sharpening</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1291B](https://codeforces.com/contest/1291/problem/B) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Array Sharpening</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You're given an array $$$a_1, \ldots, a_n$$$ of $$$n$$$ non-negative integers.</p><p>Let's call it <span class="tex-font-style-it">sharpened</span> if and only if there exists an integer $$$1 \le k \le n$$$ such that $$$a_1  \lt  a_2  \lt  \ldots  \lt  a_k$$$ and $$$a_k  \gt  a_{k+1}  \gt  \ldots  \gt  a_n$$$. In particular, any strictly increasing or strictly decreasing array is <span class="tex-font-style-it">sharpened</span>. For example:</p><ul> <li> The arrays $$$[4]$$$, $$$[0, 1]$$$, $$$[12, 10, 8]$$$ and $$$[3, 11, 15, 9, 7, 4]$$$ are sharpened; </li><li> The arrays $$$[2, 8, 2, 8, 6, 5]$$$, $$$[0, 1, 1, 0]$$$ and $$$[2, 5, 6, 9, 8, 8]$$$ are <span class="tex-font-style-bf">not</span> sharpened. </li></ul><p>You can do the following operation as many times as you want: choose any <span class="tex-font-style-bf">strictly positive</span> element of the array, and decrease it by one. Formally, you can choose any $$$i$$$ ($$$1 \le i \le n$$$) such that $$$a_i \gt 0$$$ and assign $$$a_i := a_i - 1$$$.</p><p>Tell if it's possible to make the given array <span class="tex-font-style-it">sharpened</span> using some number (possibly zero) of these operations.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 15\ 000$$$)  — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 3 \cdot 10^5$$$).</p><p>The second line of each test case contains a sequence of $$$n$$$ non-negative integers $$$a_1, \ldots, a_n$$$ ($$$0 \le a_i \le 10^9$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$3 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single line containing "<span class="tex-font-style-tt">Yes</span>" (without quotes) if it's possible to make the given array sharpened using the described operations, or "<span class="tex-font-style-tt">No</span>" (without quotes) otherwise.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009506959591708216" id="id006868021352856517" class="input-output-copier">Copy</div></div><pre id="id009506959591708216">10
1
248618
3
12 10 8
6
100 11 15 9 7 8
4
0 1 1 0
2
0 0
2
0 1
2
1 0
2
1 1
3
0 1 0
3
1 0 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005074327151204046" id="id00964919689499644" class="input-output-copier">Copy</div></div><pre id="id005074327151204046">Yes
Yes
Yes
No
No
Yes
Yes
Yes
Yes
No
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first and the second test case of the first test, the given array is already sharpened.</p><p>In the third test case of the first test, we can transform the array into $$$[3, 11, 15, 9, 7, 4]$$$ (decrease the first element $$$97$$$ times and decrease the last element $$$4$$$ times). It is sharpened because $$$3  \lt  11  \lt  15$$$ and $$$15  \gt  9  \gt  7  \gt  4$$$.</p><p>In the fourth test case of the first test, it's impossible to make the given array sharpened.</p></div>