<h2><a href="https://codeforces.com/contest/1400/problem/C" target="_blank" rel="noopener noreferrer">1400C — Binary String Reconstruction</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1400C](https://codeforces.com/contest/1400/problem/C) |

## Topics
`2-sat` `brute force` `constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Binary String Reconstruction</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Consider the following process. You have a binary string (a string where each character is either <span class="tex-font-style-tt">0</span> or <span class="tex-font-style-tt">1</span>) $$$w$$$ of length $$$n$$$ and an integer $$$x$$$. You build a new binary string $$$s$$$ consisting of $$$n$$$ characters. The $$$i$$$-th character of $$$s$$$ is chosen as follows:</p><ul> <li> if the character $$$w_{i-x}$$$ exists and is equal to <span class="tex-font-style-tt">1</span>, then $$$s_i$$$ is <span class="tex-font-style-tt">1</span> (formally, if $$$i  \gt  x$$$ and $$$w_{i-x} = $$$ <span class="tex-font-style-tt">1</span>, then $$$s_i = $$$ <span class="tex-font-style-tt">1</span>); </li><li> if the character $$$w_{i+x}$$$ exists and is equal to <span class="tex-font-style-tt">1</span>, then $$$s_i$$$ is <span class="tex-font-style-tt">1</span> (formally, if $$$i + x \le n$$$ and $$$w_{i+x} = $$$ <span class="tex-font-style-tt">1</span>, then $$$s_i = $$$ <span class="tex-font-style-tt">1</span>); </li><li> if both of the aforementioned conditions are false, then $$$s_i$$$ is <span class="tex-font-style-tt">0</span>. </li></ul><p>You are given the integer $$$x$$$ and the resulting string $$$s$$$. Reconstruct the original string $$$w$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>Each test case consists of two lines. The first line contains the resulting string $$$s$$$ ($$$2 \le |s| \le 10^5$$$, each character of $$$s$$$ is either <span class="tex-font-style-tt">0</span> or <span class="tex-font-style-tt">1</span>). The second line contains one integer $$$x$$$ ($$$1 \le x \le |s| - 1$$$).</p><p>The total length of all strings $$$s$$$ in the input does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer on a separate line as follows:</p><ul> <li> if no string $$$w$$$ can produce the string $$$s$$$ at the end of the process, print $$$-1$$$; </li><li> otherwise, print the binary string $$$w$$$ consisting of $$$|s|$$$ characters. If there are multiple answers, print any of them. </li></ul></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0015808289770071915" id="id0042930425682244666" class="input-output-copier">Copy</div></div><pre id="id0015808289770071915">3
101110
2
01
1
110
1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006685474817151453" id="id006082194764565695" class="input-output-copier">Copy</div></div><pre id="id006685474817151453">111011
10
-1
</pre></div></div></div>