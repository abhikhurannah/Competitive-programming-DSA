<h2><a href="https://codeforces.com/contest/1077/problem/F1" target="_blank" rel="noopener noreferrer">1077F1 — Pictures with Kittens (easy version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1077F1](https://codeforces.com/contest/1077/problem/F1) |

## Topics
`dp`

---

## Problem Statement

<div class="header"><div class="title">F1. Pictures with Kittens (easy version)</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">The only difference between easy and hard versions is the constraints.</span></p><p>Vova likes pictures with kittens. The news feed in the social network he uses can be represented as an array of $$$n$$$ consecutive pictures (with kittens, of course). Vova likes all these pictures, but some are more beautiful than the others: the $$$i$$$-th picture has beauty $$$a_i$$$.</p><p>Vova wants to repost exactly $$$x$$$ pictures in such a way that: </p><ul> <li> each segment of the news feed of at least $$$k$$$ consecutive pictures has at least one picture reposted by Vova; </li><li> the sum of beauty values of reposted pictures is maximum possible. </li></ul><p>For example, if $$$k=1$$$ then Vova has to repost all the pictures in the news feed. If $$$k=2$$$ then Vova can skip some pictures, but between every pair of consecutive pictures Vova has to repost at least one of them.</p><p>Your task is to calculate the maximum possible sum of values of reposted pictures if Vova follows conditions described above, or say that there is no way to satisfy all conditions.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains three integers $$$n, k$$$ and $$$x$$$ ($$$1 \le k, x \le n \le 200$$$) — the number of pictures in the news feed, the minimum length of segment with at least one repost in it and the number of pictures Vova is ready to repost.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$), where $$$a_i$$$ is the beauty of the $$$i$$$-th picture.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print <span class="tex-font-style-tt">-1</span> if there is no way to repost some pictures to satisfy all the conditions in the problem statement.</p><p>Otherwise print one integer — the maximum sum of values of reposted pictures if Vova follows conditions described in the problem statement.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007060650133371453" id="id0081223740250336" class="input-output-copier">Copy</div></div><pre id="id007060650133371453">5 2 3
5 1 3 10 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004872312972142302" id="id008460761830135967" class="input-output-copier">Copy</div></div><pre id="id004872312972142302">18
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0049726763521814255" id="id0021338623069485307" class="input-output-copier">Copy</div></div><pre id="id0049726763521814255">6 1 5
10 30 30 70 10 10
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009629965061276856" id="id0030771718378613244" class="input-output-copier">Copy</div></div><pre id="id009629965061276856">-1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005087454807279285" id="id00293260015576145" class="input-output-copier">Copy</div></div><pre id="id005087454807279285">4 3 1
1 100 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001941289135383395" id="id005895906334477319" class="input-output-copier">Copy</div></div><pre id="id001941289135383395">100
</pre></div></div></div>