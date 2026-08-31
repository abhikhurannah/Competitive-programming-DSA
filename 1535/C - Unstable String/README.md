<h2><a href="https://codeforces.com/contest/1535/problem/C" target="_blank" rel="noopener noreferrer">1535C — Unstable String</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1535C](https://codeforces.com/contest/1535/problem/C) |

## Topics
`binary search` `dp` `greedy` `implementation` `strings` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">C. Unstable String</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a string $$$s$$$ consisting of the characters <span class="tex-font-style-tt">0</span>, <span class="tex-font-style-tt">1</span>, and <span class="tex-font-style-tt">?</span>.</p><p>Let's call a string <span class="tex-font-style-bf">unstable</span> if it consists of the characters <span class="tex-font-style-tt">0</span> and <span class="tex-font-style-tt">1</span> and any two adjacent characters are different (i. e. it has the form <span class="tex-font-style-tt">010101...</span> or <span class="tex-font-style-tt">101010...</span>).</p><p>Let's call a string <span class="tex-font-style-bf">beautiful</span> if it consists of the characters <span class="tex-font-style-tt">0</span>, <span class="tex-font-style-tt">1</span>, and <span class="tex-font-style-tt">?</span>, and you can replace the characters <span class="tex-font-style-tt">?</span> to <span class="tex-font-style-tt">0</span> or <span class="tex-font-style-tt">1</span> (for each character, the choice is independent), so that the string becomes <span class="tex-font-style-bf">unstable</span>.</p><p>For example, the strings <span class="tex-font-style-tt">0??10</span>, <span class="tex-font-style-tt">0</span>, and <span class="tex-font-style-tt">???</span> are beautiful, and the strings <span class="tex-font-style-tt">00</span> and <span class="tex-font-style-tt">?1??1</span> are not.</p><p>Calculate the number of beautiful contiguous substrings of the string $$$s$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — number of test cases.</p><p>The first and only line of each test case contains the string $$$s$$$ ($$$1 \le |s| \le 2 \cdot 10^5$$$) consisting of characters <span class="tex-font-style-tt">0</span>, <span class="tex-font-style-tt">1</span>, and <span class="tex-font-style-tt">?</span>.</p><p>It is guaranteed that the sum of the string lengths over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the number of <span class="tex-font-style-bf">beautiful</span> substrings of the string $$$s$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006415202027605176" id="id008607503703649119" class="input-output-copier">Copy</div></div><pre id="id006415202027605176">3
0?10
???
?10??1100
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007090613497482816" id="id00917151395951364" class="input-output-copier">Copy</div></div><pre id="id007090613497482816">8
6
25
</pre></div></div></div>