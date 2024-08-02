<h1>Data Structure Projects</h1>

<p>This repository contains a collection of my projects on data structures. Each project demonstrates different data structures and their applications.</p>

<h2>Divisibility Queries Project</h2>

<h3>Problem Description</h3>

<p>Asmonber wants to test his mental agility and intelligence by having an intelligence competition with Patrick. The first and only question of the competition is as follows:</p>

<p>Initially, we have an empty set of numbers. In each step, we have a request of one of the following forms:</p>

<ol>
  <li><code>1 x</code>
    <p>In this case, <code>x</code> is not in our set, and we need to add <code>x</code> to the set.</p>
  </li>
  <li><code>2 x</code>
    <p>For this request, we need to print how many numbers in the set are divisible by <code>x</code>.</p>
  </li>
</ol>

<p>The constraints are as follows:</p>
<ul>
  <li><code>0 < x ≤ 10<sup>5</sup></code></li>
  <li><code>0 < n ≤ 10<sup>5</sup></code></li>
</ul>
<p>Where <code>n</code> is the number of requests.</p>

<h3>Input</h3>
<ul>
  <li>The first line contains an integer <code>n</code>, the number of requests.</li>
  <li>The following <code>n</code> lines each contain a request in the form of <code>1 x</code> or <code>2 x</code>.</li>
</ul>

<h3>Output</h3>
<p>For each <code>2 x</code> request, output a single integer representing the number of elements in the set that are divisible by <code>x</code>.</p>

<h3>Example</h3>

<h4>Input</h4>
<pre><code>
7
2 5
1 15
1 10
2 5
1 23
1 46
2 1
</code></pre>

<h4>Output</h4>
<pre><code>
0
2
4
</code></pre>

<p>In this example:</p>
<ul>
  <li>For the first request <code>2 5</code>, the set is empty, so the result is <code>0</code>.</li>
  <li>After adding <code>15</code> and <code>10</code> to the set, there are <code>2</code> numbers divisible by <code>5</code> (<code>15</code> and <code>10</code>).</li>
  <li>After adding <code>23</code> and <code>46</code> to the set, there are <code>4</code> numbers divisible by <code>1</code> (<code>15</code>, <code>10</code>, <code>23</code>, and <code>46</code>).</li>
</ul>
