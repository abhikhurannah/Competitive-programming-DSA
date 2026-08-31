<h2><a href="https://codeforces.com/contest/1332/problem/C" target="_blank" rel="noopener noreferrer">1332C — K-Complete Word</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1332C](https://codeforces.com/contest/1332/problem/C) |

## Topics
`dfs and similar` `dsu` `greedy` `implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">C. K-Complete Word</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Word $$$s$$$ of length $$$n$$$ is called $$$k$$$-complete if </p><ul> <li> $$$s$$$ is a palindrome, i.e. $$$s_i=s_{n+1-i}$$$ for all $$$1 \le i \le n$$$; </li><li> $$$s$$$ has a period of $$$k$$$, i.e. $$$s_i=s_{k+i}$$$ for all $$$1 \le i \le n-k$$$. </li></ul><p>For example, "<span class="tex-font-style-tt">abaaba</span>" is a $$$3$$$-complete word, while "<span class="tex-font-style-tt">abccba</span>" is not.</p><p>Bob is given a word $$$s$$$ of length $$$n$$$ consisting of only lowercase Latin letters and an integer $$$k$$$, such that $$$n$$$ is divisible by $$$k$$$. He wants to convert $$$s$$$ to any $$$k$$$-complete word.</p><p>To do this Bob can choose some $$$i$$$ ($$$1 \le i \le n$$$) and replace the letter at position $$$i$$$ with some other lowercase Latin letter.</p><p>So now Bob wants to know the minimum number of letters he has to replace to convert $$$s$$$ to any $$$k$$$-complete word.</p><p>Note that Bob can do zero changes if the word $$$s$$$ is already $$$k$$$-complete.</p><p>You are required to answer $$$t$$$ test cases <span class="tex-font-style-bf">independently</span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t\le 10^5$$$) — the number of test cases.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le k  \lt  n \le 2 \cdot 10^5$$$, $$$n$$$ is divisible by $$$k$$$).</p><p>The second line of each test case contains a word $$$s$$$ of length $$$n$$$.</p><p>It is guaranteed that word $$$s$$$ only contains lowercase Latin letters. And it is guaranteed that the sum of $$$n$$$ over all test cases will not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one integer, representing the minimum number of characters he has to replace to convert $$$s$$$ to any $$$k$$$-complete word.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007314499691343276" id="id0030037423094297866" class="input-output-copier">Copy</div></div><pre id="id007314499691343276">4
6 2
abaaba
6 3
abaaba
36 9
hippopotomonstrosesquippedaliophobia
21 7
wudixiaoxingxingheclp
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003820934822355141" id="id0037576987423448094" class="input-output-copier">Copy</div></div><pre id="id003820934822355141">2
0
23
16
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, one optimal solution is <span class="tex-font-style-tt">a<span class="tex-font-style-underline"><span class="tex-font-style-bf">a</span></span>aa<span class="tex-font-style-underline"><span class="tex-font-style-bf">a</span></span>a</span>.</p><p>In the second test case, the given word itself is $$$k$$$-complete.</p></div>