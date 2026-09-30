<h2><a href="https://codeforces.com/contest/1325/problem/D" target="_blank" rel="noopener noreferrer">1325D — Ehab the Xorcist</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1325D](https://codeforces.com/contest/1325/problem/D) |

## Topics
`bitmasks` `constructive algorithms` `greedy` `number theory`

---

## Problem Statement

<div class="header"><div class="title">D. Ehab the Xorcist</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given 2 integers $$$u$$$ and $$$v$$$, find the shortest array such that <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise-xor</a> of its elements is $$$u$$$, and the sum of its elements is $$$v$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains 2 integers $$$u$$$ and $$$v$$$ $$$(0 \le u,v \le 10^{18})$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If there's no array that satisfies the condition, print "-1". Otherwise:</p><p>The first line should contain one integer, $$$n$$$, representing the length of the desired array. The next line should contain $$$n$$$ <span class="tex-font-style-bf">positive</span> integers, the array itself. If there are multiple possible answers, print any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007646879979591842" id="id0046217114063794706" class="input-output-copier">Copy</div></div><pre id="id007646879979591842">2 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008398247512379012" id="id0002965040116216866" class="input-output-copier">Copy</div></div><pre id="id008398247512379012">2
3 1</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005627532247191339" id="id0006327348351529805" class="input-output-copier">Copy</div></div><pre id="id005627532247191339">1 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0042217959789159365" id="id003147859436544732" class="input-output-copier">Copy</div></div><pre id="id0042217959789159365">3
1 1 1</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00732426068620923" id="id000636661407422795" class="input-output-copier">Copy</div></div><pre id="id00732426068620923">8 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005257838864535374" id="id0013351265431918935" class="input-output-copier">Copy</div></div><pre id="id005257838864535374">-1</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0046157534048455484" id="id0014820063173565168" class="input-output-copier">Copy</div></div><pre id="id0046157534048455484">0 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0009281835746247347" id="id009414973576202995" class="input-output-copier">Copy</div></div><pre id="id0009281835746247347">0</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, $$$3\oplus 1 = 2$$$ and $$$3 + 1 = 4$$$. There is no valid array of smaller length.</p><p>Notice that in the fourth sample the array is empty.</p></div>