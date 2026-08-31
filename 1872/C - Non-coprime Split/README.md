<h2><a href="https://codeforces.com/contest/1872/problem/C" target="_blank" rel="noopener noreferrer">1872C — Non-coprime Split</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1872C](https://codeforces.com/contest/1872/problem/C) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Non-coprime Split</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two integers $$$l \le r$$$. You need to find <span class="tex-font-style-bf">positive</span> integers $$$a$$$ and $$$b$$$ such that the following conditions are simultaneously satisfied:</p><ul><li> $$$l \le a + b \le r$$$</li><li> $$$\gcd(a, b) \neq 1$$$</li></ul><p>or report that they do not exist.</p><p>$$$\gcd(a, b)$$$ denotes the <a href="https://en.wikipedia.org/wiki/Greatest_common_divisor">greatest common divisor</a> of numbers $$$a$$$ and $$$b$$$. For example, $$$\gcd(6, 9) = 3$$$, $$$\gcd(8, 9) = 1$$$, $$$\gcd(4, 2) = 2$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains an integer $$$t$$$ ($$$1 \le t \le 500$$$) — the number of test cases.</p><p>Then the descriptions of the test cases follow.</p><p>The only line of the description of each test case contains $$$2$$$ integers $$$l, r$$$ ($$$1 \le l \le r \le 10^7$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the integers $$$a, b$$$ that satisfy all the conditions on a separate line. If there is no answer, instead output a single number $$$-1$$$.</p><p>If there are multiple answers, you can output any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008163231033883644" id="id008545658381251127" class="input-output-copier">Copy</div></div><pre id="id008163231033883644"><div class="test-example-line test-example-line-even test-example-line-0">11</div><div class="test-example-line test-example-line-odd test-example-line-1">11 15</div><div class="test-example-line test-example-line-even test-example-line-2">1 3</div><div class="test-example-line test-example-line-odd test-example-line-3">18 19</div><div class="test-example-line test-example-line-even test-example-line-4">41 43</div><div class="test-example-line test-example-line-odd test-example-line-5">777 777</div><div class="test-example-line test-example-line-even test-example-line-6">8000000 10000000</div><div class="test-example-line test-example-line-odd test-example-line-7">2000 2023</div><div class="test-example-line test-example-line-even test-example-line-8">1791791 1791791</div><div class="test-example-line test-example-line-odd test-example-line-9">1 4</div><div class="test-example-line test-example-line-even test-example-line-10">2 3</div><div class="test-example-line test-example-line-odd test-example-line-11">9840769 9840769</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005538961278285937" id="id00748111328484976" class="input-output-copier">Copy</div></div><pre id="id005538961278285937">6 9
-1
14 4
36 6
111 666
4000000 5000000 
2009 7
-1
2 2
-1
6274 9834495</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$11 \le 6 + 9 \le 15$$$, $$$\gcd(6, 9) = 3$$$, and all conditions are satisfied. Note that this is not the only possible answer, for example, $$$\{4, 10\}, \{5, 10\}, \{6, 6\}$$$ are also valid answers for this test case.</p><p>In the second test case, the only pairs $$$\{a, b\}$$$ that satisfy the condition $$$1 \le a + b \le 3$$$ are $$$\{1, 1\}, \{1, 2\}, \{2, 1\}$$$, but in each of these pairs $$$\gcd(a, b)$$$ equals $$$1$$$, so there is no answer.</p><p>In the third sample test, $$$\gcd(14, 4) = 2$$$.</p></div>