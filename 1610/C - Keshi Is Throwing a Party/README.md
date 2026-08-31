<h2><a href="https://codeforces.com/contest/1610/problem/C" target="_blank" rel="noopener noreferrer">1610C — Keshi Is Throwing a Party</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1610C](https://codeforces.com/contest/1610/problem/C) |

## Topics
`binary search` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Keshi Is Throwing a Party</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Keshi is throwing a party and he wants everybody in the party to be happy.</p><p>He has $$$n$$$ friends. His $$$i$$$-th friend has $$$i$$$ dollars. </p><p>If you invite the $$$i$$$-th friend to the party, he will be happy only if at most $$$a_i$$$ people in the party are strictly richer than him and at most $$$b_i$$$ people are strictly poorer than him.</p><p>Keshi wants to invite as many people as possible. Find the maximum number of people he can invite to the party so that every invited person would be happy.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ $$$(1\le t\le 10^4)$$$ — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ $$$(1\le n\le 2 \cdot 10^5)$$$ — the number of Keshi's friends.</p><p>The $$$i$$$-th of the following $$$n$$$ lines contains two integers $$$a_i$$$ and $$$b_i$$$ $$$(0 \le a_i, b_i  \lt  n)$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases doesn't exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print the maximum number of people Keshi can invite.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0040982609722403496" id="id0023932448771860249" class="input-output-copier">Copy</div></div><pre id="id0040982609722403496">3
3
1 2
2 1
1 1
2
0 0
0 1
2
1 0
0 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0033657817499395926" id="id002845549041571285" class="input-output-copier">Copy</div></div><pre id="id0033657817499395926">2
1
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, he invites the first and the second person. If he invites all of them, the third person won't be happy because there will be more than $$$1$$$ person poorer than him.</p></div>