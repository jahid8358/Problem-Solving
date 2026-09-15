<h2><a href="https://codeforces.com/contest/1216/problem/B" target="_blank" rel="noopener noreferrer">1216B — Shooting</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1216B](https://codeforces.com/contest/1216/problem/B) |

## Topics
`greedy` `implementation` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Shooting</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Recently Vasya decided to improve his pistol shooting skills. Today his coach offered him the following exercise. He placed $$$n$$$ cans in a row on a table. Cans are numbered from left to right from $$$1$$$ to $$$n$$$. Vasya has to knock down each can exactly once to finish the exercise. He is allowed to choose <span class="tex-font-style-bf">the order</span> in which he will knock the cans down.</p><p>Vasya knows that the <span class="tex-font-style-it">durability</span> of the $$$i$$$-th can is $$$a_i$$$. It means that if Vasya has already knocked $$$x$$$ cans down and is now about to start shooting the $$$i$$$-th one, he will need $$$(a_i \cdot x + 1)$$$ shots to knock it down. You can assume that if Vasya starts shooting the $$$i$$$-th can, he will be shooting it until he knocks it down.</p><p>Your task is to choose such an order of shooting so that the number of shots required to knock each of the $$$n$$$ given cans down exactly once is minimum possible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ $$$(2 \le n \le 1\,000)$$$ — the number of cans.</p><p>The second line of the input contains the sequence $$$a_1, a_2, \dots, a_n$$$ $$$(1 \le a_i \le 1\,000)$$$, where $$$a_i$$$ is the durability of the $$$i$$$-th can.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the first line print the minimum number of shots required to knock each of the $$$n$$$ given cans down exactly once.</p><p>In the second line print the sequence consisting of $$$n$$$ <span class="tex-font-style-bf">distinct</span> integers from $$$1$$$ to $$$n$$$ — the order of indices of cans that minimizes the number of shots required. If there are several answers, you can print any of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005513446748178898" id="id009638805937493297" class="input-output-copier">Copy</div></div><pre id="id005513446748178898">3
20 10 20
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0032826283914681276" id="id009046387343699738" class="input-output-copier">Copy</div></div><pre id="id0032826283914681276">43
1 3 2 
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009809243643950563" id="id0035204271516288577" class="input-output-copier">Copy</div></div><pre id="id009809243643950563">4
10 10 10 10
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0040057645475103054" id="id003793706517282519" class="input-output-copier">Copy</div></div><pre id="id0040057645475103054">64
2 1 4 3 
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008358844517413248" id="id007567209379283566" class="input-output-copier">Copy</div></div><pre id="id008358844517413248">6
5 4 5 4 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009082071827107514" id="id0046281704077555574" class="input-output-copier">Copy</div></div><pre id="id009082071827107514">69
6 1 3 5 2 4 
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005746045227828612" id="id0038174184286317836" class="input-output-copier">Copy</div></div><pre id="id005746045227828612">2
1 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009584762256681099" id="id00004258004045873731" class="input-output-copier">Copy</div></div><pre id="id009584762256681099">3
2 1 
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example Vasya can start shooting from the first can. He knocks it down with the first shot because he haven't knocked any other cans down before. After that he has to shoot the third can. To knock it down he shoots $$$20 \cdot 1 + 1 = 21$$$ times. After that only second can remains. To knock it down Vasya shoots $$$10 \cdot 2 + 1 = 21$$$ times. So the total number of shots is $$$1 + 21 + 21 = 43$$$.</p><p>In the second example the order of shooting does not matter because all cans have the same durability.</p></div>