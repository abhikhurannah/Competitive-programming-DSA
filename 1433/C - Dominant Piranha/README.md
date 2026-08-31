<h2><a href="https://codeforces.com/contest/1433/problem/C" target="_blank" rel="noopener noreferrer">1433C — Dominant Piranha</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1433C](https://codeforces.com/contest/1433/problem/C) |

## Topics
`constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Dominant Piranha</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are $$$n$$$ piranhas with sizes $$$a_1, a_2, \ldots, a_n$$$ in the aquarium. Piranhas are numbered from left to right in order they live in the aquarium.</p><p>Scientists of the Berland State University want to find if there is <span class="tex-font-style-bf">dominant</span> piranha in the aquarium. The piranha is called <span class="tex-font-style-bf">dominant</span> if it can eat all the other piranhas in the aquarium (except itself, of course). Other piranhas will do nothing while the <span class="tex-font-style-bf">dominant</span> piranha will eat them.</p><p>Because the aquarium is pretty narrow and long, the piranha can eat only one of the adjacent piranhas during one move. Piranha can do as many moves as it needs (or as it can). More precisely: </p><ul> <li> The piranha $$$i$$$ can eat the piranha $$$i-1$$$ if the piranha $$$i-1$$$ exists and $$$a_{i - 1}  \lt  a_i$$$. </li><li> The piranha $$$i$$$ can eat the piranha $$$i+1$$$ if the piranha $$$i+1$$$ exists and $$$a_{i + 1}  \lt  a_i$$$. </li></ul><p>When the piranha $$$i$$$ eats some piranha, its <span class="tex-font-style-bf">size increases by one</span> ($$$a_i$$$ becomes $$$a_i + 1$$$).</p><p>Your task is to find <span class="tex-font-style-bf">any dominant</span> piranha in the aquarium or determine if there are no such piranhas.</p><p>Note that you have to find <span class="tex-font-style-bf">any</span> (exactly one) dominant piranha, you don't have to find all of them.</p><p>For example, if $$$a = [5, 3, 4, 4, 5]$$$, then the third piranha can be <span class="tex-font-style-bf">dominant</span>. Consider the sequence of its moves: </p><ul> <li> The piranha eats the second piranha and $$$a$$$ becomes $$$[5, \underline{5}, 4, 5]$$$ (the underlined piranha is our candidate). </li><li> The piranha eats the third piranha and $$$a$$$ becomes $$$[5, \underline{6}, 5]$$$. </li><li> The piranha eats the first piranha and $$$a$$$ becomes $$$[\underline{7}, 5]$$$. </li><li> The piranha eats the second piranha and $$$a$$$ becomes $$$[\underline{8}]$$$. </li></ul><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 2 \cdot 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The first line of the test case contains one integer $$$n$$$ ($$$2 \le n \le 3 \cdot 10^5$$$) — the number of piranhas in the aquarium. The second line of the test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^9$$$), where $$$a_i$$$ is the size of the $$$i$$$-th piranha.</p><p>It is guaranteed that the sum of $$$n$$$ does not exceed $$$3 \cdot 10^5$$$ ($$$\sum n \le 3 \cdot 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer: <span class="tex-font-style-tt">-1</span> if there are no dominant piranhas in the aquarium or <span class="tex-font-style-bf">index</span> of <span class="tex-font-style-bf">any</span> dominant piranha otherwise. If there are several answers, you can print any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007344698489226709" id="id006751975039357286" class="input-output-copier">Copy</div></div><pre id="id007344698489226709">6
5
5 3 4 4 5
3
1 1 1
5
4 4 3 4 4
5
5 5 4 3 2
3
1 1 2
5
5 4 3 5 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00032562920417188" id="id002973178047726589" class="input-output-copier">Copy</div></div><pre id="id00032562920417188">3
-1
4
3
3
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first test case of the example is described in the problem statement.</p><p>In the second test case of the example, there are no dominant piranhas in the aquarium.</p><p>In the third test case of the example, the fourth piranha can firstly eat the piranha to the left and the aquarium becomes $$$[4, 4, 5, 4]$$$, then it can eat any other piranha in the aquarium.</p></div>