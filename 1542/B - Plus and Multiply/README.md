<h2><a href="https://codeforces.com/contest/1542/problem/B" target="_blank" rel="noopener noreferrer">1542B — Plus and Multiply</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1542B](https://codeforces.com/contest/1542/problem/B) |

## Topics
`constructive algorithms` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Plus and Multiply</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There is an infinite set generated as follows:</p><ul> <li> $$$1$$$ is in this set. </li><li> If $$$x$$$ is in this set, $$$x \cdot a$$$ and $$$x+b$$$ both are in this set. </li></ul><p>For example, when $$$a=3$$$ and $$$b=6$$$, the five smallest elements of the set are:</p><ul> <li> $$$1$$$, </li><li> $$$3$$$ ($$$1$$$ is in this set, so $$$1\cdot a=3$$$ is in this set), </li><li> $$$7$$$ ($$$1$$$ is in this set, so $$$1+b=7$$$ is in this set), </li><li> $$$9$$$ ($$$3$$$ is in this set, so $$$3\cdot a=9$$$ is in this set), </li><li> $$$13$$$ ($$$7$$$ is in this set, so $$$7+b=13$$$ is in this set). </li></ul><p>Given positive integers $$$a$$$, $$$b$$$, $$$n$$$, determine if $$$n$$$ is in this set.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1\leq t\leq 10^5$$$) — the number of test cases. The description of the test cases follows.</p><p>The only line describing each test case contains three integers $$$n$$$, $$$a$$$, $$$b$$$ ($$$1\leq n,a,b\leq 10^9$$$) separated by a single space.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print "<span class="tex-font-style-tt">Yes</span>" if $$$n$$$ is in this set, and "<span class="tex-font-style-tt">No</span>" otherwise. You can print each letter in any case.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006792087976190482" id="id004465220041056238" class="input-output-copier">Copy</div></div><pre id="id006792087976190482">5
24 3 5
10 3 6
2345 1 4
19260817 394 485
19260817 233 264
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00112661074731352" id="id008507939858153586" class="input-output-copier">Copy</div></div><pre id="id00112661074731352">Yes
No
Yes
No
Yes
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$24$$$ is generated as follows:</p><ul> <li> $$$1$$$ is in this set, so $$$3$$$ and $$$6$$$ are in this set; </li><li> $$$3$$$ is in this set, so $$$9$$$ and $$$8$$$ are in this set; </li><li> $$$8$$$ is in this set, so $$$24$$$ and $$$13$$$ are in this set. </li></ul><p>Thus we can see $$$24$$$ is in this set.</p><p>The five smallest elements of the set in the second test case is described in statements. We can see that $$$10$$$ isn't among them.</p></div>