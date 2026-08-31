<h2><a href="https://codeforces.com/contest/1132/problem/F" target="_blank" rel="noopener noreferrer">1132F — Clear the String</a></h2>

| | |
|---|---|
| **Difficulty** | 2000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1132F](https://codeforces.com/contest/1132/problem/F) |

## Topics
`dp`

---

## Problem Statement

<div class="header"><div class="title">F. Clear the String</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a string $$$s$$$ of length $$$n$$$ consisting of lowercase Latin letters. You may apply some operations to this string: in one operation you can delete some contiguous substring of this string, if all letters in the substring you delete are equal. For example, after deleting substring <span class="tex-font-style-tt">bbbb</span> from string <span class="tex-font-style-tt">abbbbaccdd</span> we get the string <span class="tex-font-style-tt">aaccdd</span>.</p><p>Calculate the minimum number of operations to delete the whole string $$$s$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$1 \le n \le 500$$$) — the length of string $$$s$$$.</p><p>The second line contains the string $$$s$$$ ($$$|s| = n$$$) consisting of lowercase Latin letters.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output a single integer — the minimal number of operation to delete string $$$s$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007429163381643927" id="id006842419156985033" class="input-output-copier">Copy</div></div><pre id="id007429163381643927">5
abaca
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006291558352839567" id="id009946681666138086" class="input-output-copier">Copy</div></div><pre id="id006291558352839567">3</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007265547940672635" id="id009545595901427126" class="input-output-copier">Copy</div></div><pre id="id007265547940672635">8
abcddcba
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0008592433122806442" id="id008701601826614257" class="input-output-copier">Copy</div></div><pre id="id0008592433122806442">4</pre></div></div></div>