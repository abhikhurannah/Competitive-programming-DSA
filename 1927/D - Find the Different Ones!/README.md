<h2><a href="https://codeforces.com/contest/1927/problem/D" target="_blank" rel="noopener noreferrer">1927D — Find the Different Ones!</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1927D](https://codeforces.com/contest/1927/problem/D) |

## Topics
`binary search` `brute force` `data structures` `dp` `dsu` `greedy` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">D. Find the Different Ones!</div><div class="time-limit"><div class="property-title">time limit per test</div>5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ of $$$n$$$ integers, and $$$q$$$ queries.</p><p>Each query is represented by two integers $$$l$$$ and $$$r$$$ ($$$1 \le l \le r \le n$$$). Your task is to find, for each query, two indices $$$i$$$ and $$$j$$$ (or determine that they do not exist) such that:</p><ul> <li> $$$l \le i \le r$$$; </li><li> $$$l \le j \le r$$$; </li><li> $$$a_i \ne a_j$$$. </li></ul><p>In other words, for each query, you need to find a pair of different elements among $$$a_l, a_{l+1}, \dots, a_r$$$, or report that such a pair does not exist.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The descriptions of the test cases follow.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10^5$$$) — the length of the array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^6$$$) — the elements of the array $$$a$$$.</p><p>The third line of each test case contains a single integer $$$q$$$ ($$$1 \le q \le 2 \cdot 10^5$$$) — the number of queries.</p><p>The next $$$q$$$ lines contain two integers each, $$$l$$$ and $$$r$$$ ($$$1 \le l  \lt  r \le n$$$) — the boundaries of the query.</p><p>It is guaranteed that the sum of the values of $$$n$$$ across all test cases does not exceed $$$2 \cdot 10^5$$$. Similarly, it is guaranteed that the sum of the values of $$$q$$$ across all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query, output two integers separated by space: $$$i$$$ and $$$j$$$ ($$$l \le i, j \le r$$$), for which $$$a_i \ne a_j$$$. If such a pair does not exist, output $$$i=-1$$$ and $$$j=-1$$$.</p><p>You may separate the outputs for the test cases with empty lines. This is not a mandatory requirement.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009947110091906606" id="id007023781458258572" class="input-output-copier">Copy</div></div><pre id="id009947110091906606"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1 2 1 1</div><div class="test-example-line test-example-line-odd test-example-line-1">3</div><div class="test-example-line test-example-line-odd test-example-line-1">1 5</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2</div><div class="test-example-line test-example-line-odd test-example-line-1">1 3</div><div class="test-example-line test-example-line-even test-example-line-2">6</div><div class="test-example-line test-example-line-even test-example-line-2">30 20 20 10 10 20</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-even test-example-line-2">1 2</div><div class="test-example-line test-example-line-even test-example-line-2">2 3</div><div class="test-example-line test-example-line-even test-example-line-2">2 4</div><div class="test-example-line test-example-line-even test-example-line-2">2 6</div><div class="test-example-line test-example-line-even test-example-line-2">3 5</div><div class="test-example-line test-example-line-odd test-example-line-3">4</div><div class="test-example-line test-example-line-odd test-example-line-3">5 2 3 4</div><div class="test-example-line test-example-line-odd test-example-line-3">4</div><div class="test-example-line test-example-line-odd test-example-line-3">1 2</div><div class="test-example-line test-example-line-odd test-example-line-3">1 4</div><div class="test-example-line test-example-line-odd test-example-line-3">2 3</div><div class="test-example-line test-example-line-odd test-example-line-3">2 4</div><div class="test-example-line test-example-line-even test-example-line-4">5</div><div class="test-example-line test-example-line-even test-example-line-4">1 4 3 2 4</div><div class="test-example-line test-example-line-even test-example-line-4">5</div><div class="test-example-line test-example-line-even test-example-line-4">1 5</div><div class="test-example-line test-example-line-even test-example-line-4">2 4</div><div class="test-example-line test-example-line-even test-example-line-4">3 4</div><div class="test-example-line test-example-line-even test-example-line-4">3 5</div><div class="test-example-line test-example-line-even test-example-line-4">4 5</div><div class="test-example-line test-example-line-odd test-example-line-5">5</div><div class="test-example-line test-example-line-odd test-example-line-5">2 3 1 4 2</div><div class="test-example-line test-example-line-odd test-example-line-5">7</div><div class="test-example-line test-example-line-odd test-example-line-5">1 2</div><div class="test-example-line test-example-line-odd test-example-line-5">1 4</div><div class="test-example-line test-example-line-odd test-example-line-5">1 5</div><div class="test-example-line test-example-line-odd test-example-line-5">2 4</div><div class="test-example-line test-example-line-odd test-example-line-5">2 5</div><div class="test-example-line test-example-line-odd test-example-line-5">3 5</div><div class="test-example-line test-example-line-odd test-example-line-5">4 5</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0044462336545351633" id="id006675495106726348" class="input-output-copier">Copy</div></div><pre id="id0044462336545351633">2 3
-1 -1
1 3

2 1
-1 -1
4 2
4 6
5 3

1 2
1 2
2 3
3 2

1 3
2 4
3 4
5 3
5 4

1 2
4 2
1 3
2 3
3 2
5 4
5 4
</pre></div></div></div>