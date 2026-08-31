<h2><a href="https://codeforces.com/contest/1846/problem/E1" target="_blank" rel="noopener noreferrer">1846E1 — Rudolf and Snowflakes (simple version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1846E1](https://codeforces.com/contest/1846/problem/E1) |

## Topics
`brute force` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">E1. Rudolf and Snowflakes (simple version)</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">This is a simple version of the problem. The only difference is that in this version $$$n \le 10^6$$$.</span></p><p>One winter morning, Rudolf was looking thoughtfully out the window, watching the falling snowflakes. He quickly noticed a certain symmetry in the configuration of the snowflakes. And like a true mathematician, Rudolf came up with a mathematical model of a snowflake.</p><p>He defined a snowflake as an undirected graph constructed according to the following rules: </p><ul> <li> Initially, the graph has only one vertex. </li><li> Then, more vertices are added to the graph. The initial vertex is connected by edges to $$$k$$$ new vertices ($$$k  \gt  1$$$). </li><li> Each vertex that is connected to only one other vertex is connected by edges to $$$k$$$ more new vertices. This step should be done <span class="tex-font-style-bf">at least once</span>. </li></ul><p>The smallest possible snowflake for $$$k = 4$$$ is shown in the figure.</p><center>  <img class="tex-graphics" src="https://espresso.codeforces.com/5b227744dd1e23e7aee9ec94b37dd375de424c86.png" style="max-width: 100.0%;max-height: 100.0%;" width="360px"> </center><p>After some mathematical research, Rudolf realized that such snowflakes may not have any number of vertices. Help Rudolf check if a snowflake with $$$n$$$ vertices can exist.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>Then follow the descriptions of the test cases.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \le n \le 10^6$$$) — the number of vertices for which it is necessary to check the existence of a snowflake.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output $$$t$$$ lines, each of which is the answer to the corresponding test case — "YES" if there exists such $$$k  \gt  1$$$ for which a snowflake with the given number of vertices can be constructed; "NO" otherwise.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0015806338406926468" id="id00626114445845254" class="input-output-copier">Copy</div></div><pre id="id0015806338406926468"><div class="test-example-line test-example-line-even test-example-line-0">9</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-even test-example-line-4">6</div><div class="test-example-line test-example-line-odd test-example-line-5">13</div><div class="test-example-line test-example-line-even test-example-line-6">15</div><div class="test-example-line test-example-line-odd test-example-line-7">255</div><div class="test-example-line test-example-line-even test-example-line-8">10101</div><div class="test-example-line test-example-line-odd test-example-line-9">1000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006980114113036907" id="id006525749989662204" class="input-output-copier">Copy</div></div><pre id="id006980114113036907">NO
NO
NO
NO
YES
YES
YES
YES
NO
</pre></div></div></div>