<h2><a href="https://codeforces.com/contest/1196/problem/B" target="_blank" rel="noopener noreferrer">1196B — Odd Sum Segments</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1196B](https://codeforces.com/contest/1196/problem/B) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Odd Sum Segments</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ consisting of $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$. You want to split it into exactly $$$k$$$ <span class="tex-font-style-bf">non-empty non-intersecting subsegments</span> such that each subsegment has odd sum (i. e. for each subsegment, the sum of all elements that belong to this subsegment is odd). It is impossible to rearrange (shuffle) the elements of a given array. Each of the $$$n$$$ elements of the array $$$a$$$ must belong to exactly one of the $$$k$$$ subsegments.</p><p>Let's see some examples of dividing the array of length $$$5$$$ into $$$3$$$ subsegments (not necessarily with odd sums): $$$[1, 2, 3, 4, 5]$$$ is the initial array, then all possible ways to divide it into $$$3$$$ non-empty non-intersecting subsegments are described below:</p><ul> <li> $$$[1], [2], [3, 4, 5]$$$; </li><li> $$$[1], [2, 3], [4, 5]$$$; </li><li> $$$[1], [2, 3, 4], [5]$$$; </li><li> $$$[1, 2], [3], [4, 5]$$$; </li><li> $$$[1, 2], [3, 4], [5]$$$; </li><li> $$$[1, 2, 3], [4], [5]$$$. </li></ul><p>Of course, it can be impossible to divide the initial array into exactly $$$k$$$ subsegments in such a way that each of them will have odd sum of elements. In this case print "<span class="tex-font-style-tt">NO</span>". Otherwise, print "<span class="tex-font-style-tt">YES</span>" and <span class="tex-font-style-bf">any</span> possible division of the array. See the output format for the detailed explanation.</p><p>You have to answer $$$q$$$ independent queries.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$q$$$ ($$$1 \le q \le 2 \cdot 10^5$$$) — the number of queries. Then $$$q$$$ queries follow.</p><p>The first line of the query contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le k \le n \le 2 \cdot 10^5$$$) — the number of elements in the array and the number of subsegments, respectively.</p><p>The second line of the query contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$), where $$$a_i$$$ is the $$$i$$$-th element of $$$a$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all queries does not exceed $$$2 \cdot 10^5$$$ ($$$\sum n \le 2 \cdot 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query, print the answer to it. If it is impossible to divide the initial array into exactly $$$k$$$ subsegments in such a way that each of them will have odd sum of elements, print "<span class="tex-font-style-tt">NO</span>" in the first line. Otherwise, print "<span class="tex-font-style-tt">YES</span>" in the first line and <span class="tex-font-style-bf">any</span> possible division of the array in the second line. The division can be represented as $$$k$$$ integers $$$r_1$$$, $$$r_2$$$, ..., $$$r_k$$$ such that $$$1 \le r_1  \lt  r_2  \lt  \dots  \lt  r_k = n$$$, where $$$r_j$$$ is the right border of the $$$j$$$-th segment (the index of the last element that belongs to the $$$j$$$-th segment), so the array is divided into subsegments $$$[1; r_1], [r_1 + 1; r_2], [r_2 + 1, r_3], \dots, [r_{k - 1} + 1, n]$$$. <span class="tex-font-style-bf">Note that $$$r_k$$$ is always $$$n$$$ but you should print it anyway</span>. </p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00599955096596099" id="id0008896117107687118" class="input-output-copier">Copy</div></div><pre id="id00599955096596099">3
5 3
7 18 3 14 1
5 4
1 2 3 4 5
6 2
1 2 8 4 10 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006121302808742326" id="id008522995637068769" class="input-output-copier">Copy</div></div><pre id="id006121302808742326">YES
1 3 5
NO
NO
</pre></div></div></div>