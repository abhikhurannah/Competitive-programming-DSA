<h2><a href="https://codeforces.com/contest/1514/problem/C" target="_blank" rel="noopener noreferrer">1514C — Product 1 Modulo N</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1514C](https://codeforces.com/contest/1514/problem/C) |

## Topics
`greedy` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Product 1 Modulo N</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Now you get Baby Ehab's first words: "Given an integer $$$n$$$, find the longest subsequence of $$$[1,2, \ldots, n-1]$$$ whose product is $$$1$$$ modulo $$$n$$$." Please solve the problem.</p><p>A sequence $$$b$$$ is a subsequence of an array $$$a$$$ if $$$b$$$ can be obtained from $$$a$$$ by deleting some (possibly all) elements. The product of an empty subsequence is equal to $$$1$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains the integer $$$n$$$ ($$$2 \le n \le 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>The first line should contain a single integer, the length of the longest subsequence.</p><p>The second line should contain the elements of the subsequence, <span class="tex-font-style-bf">in increasing order</span>.</p><p>If there are multiple solutions, you can print any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0036104595362237113" id="id004932321090286932" class="input-output-copier">Copy</div></div><pre id="id0036104595362237113">5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0011489855919633318" id="id005779285600340736" class="input-output-copier">Copy</div></div><pre id="id0011489855919633318">3
1 2 3 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003967990298427989" id="id009618927172690991" class="input-output-copier">Copy</div></div><pre id="id003967990298427989">8
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0007829073052063507" id="id0007914805508562939" class="input-output-copier">Copy</div></div><pre id="id0007829073052063507">4
1 3 5 7 </pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the product of the elements is $$$6$$$ which is congruent to $$$1$$$ modulo $$$5$$$. The only longer subsequence is $$$[1,2,3,4]$$$. Its product is $$$24$$$ which is congruent to $$$4$$$ modulo $$$5$$$. Hence, the answer is $$$[1,2,3]$$$.</p></div>