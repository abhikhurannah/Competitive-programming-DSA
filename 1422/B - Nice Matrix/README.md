<h2><a href="https://codeforces.com/contest/1422/problem/B" target="_blank" rel="noopener noreferrer">1422B — Nice Matrix</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1422B](https://codeforces.com/contest/1422/problem/B) |

## Topics
`greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Nice Matrix</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A matrix of size $$$n \times m$$$ is called nice, if all rows and columns of the matrix are palindromes. A sequence of integers $$$(a_1, a_2, \dots , a_k)$$$ is a palindrome, if for any integer $$$i$$$ ($$$1 \le i \le k$$$) the equality $$$a_i = a_{k - i + 1}$$$ holds.</p><p>Sasha owns a matrix $$$a$$$ of size $$$n \times m$$$. In one operation he can increase or decrease any number in the matrix by one. Sasha wants to make the matrix nice. He is interested what is the minimum number of operations he needs.</p><p>Help him!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ — the number of test cases ($$$1 \le t \le 10$$$). The $$$t$$$ tests follow.</p><p>The first line of each test contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 100$$$) — the size of the matrix.</p><p>Each of the next $$$n$$$ lines contains $$$m$$$ integers $$$a_{i, j}$$$ ($$$0 \le a_{i, j} \le 10^9$$$) — the elements of the matrix.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test output the smallest number of operations required to make the matrix nice.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002949998095687386" id="id005094989097748549" class="input-output-copier">Copy</div></div><pre id="id002949998095687386">2
4 2
4 2
2 4
4 2
2 4
3 4
1 2 3 4
5 6 7 8
9 10 11 18
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004477413277896847" id="id0031944336197307766" class="input-output-copier">Copy</div></div><pre id="id004477413277896847">8
42
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case we can, for example, obtain the following nice matrix in $$$8$$$ operations:</p><pre class="verbatim"><br>2 2<br>4 4<br>4 4<br>2 2<br></pre><p>In the second test case we can, for example, obtain the following nice matrix in $$$42$$$ operations:</p><pre class="verbatim"><br>5 6 6 5<br>6 6 6 6<br>5 6 6 5<br></pre></div>