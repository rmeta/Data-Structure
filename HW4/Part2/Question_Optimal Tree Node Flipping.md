<h2>Problem Description</h2>
<p>After solving the previous problem, Tom is given a break by John. Tom uses this opportunity to visit the forest and meet Alice, who is struggling with a tree problem. Alice asks Tom for help with the following task:</p>

<p>Alice gives Tom a rooted tree with <code>n</code> nodes. The root of the tree is node <code>1</code>. Each node has a value that is either <code>0</code> or <code>1</code>. Initially, node <code>i</code> has a value <code>init[i]</code>. Tom is allowed to perform only one type of operation on the tree. When performing this operation on node <code>x</code>, the following happens:</p>
<ul>
    <li>The value of node <code>x</code> is inverted (flipped).</li>
    <li>The values of the direct children of node <code>x</code> remain unchanged.</li>
    <li>The values of the grandchildren of node <code>x</code> are inverted.</li>
    <li>The values of the great-grandchildren of node <code>x</code> remain unchanged.</li>
    <li>This pattern continues with each subsequent level of descendants.</li>
</ul>
<p>Alice wants the final value on node <code>i</code> to be <code>goal[i]</code> and to achieve this with the minimum number of operations. Help Tom determine the minimum number of operations needed and which nodes should be operated on.</p>

<h2>Input</h2>
<ul>
    <li>The first line contains a single integer <code>n</code>, the number of nodes in the tree.</li>
    <li>The next <code>n - 1</code> lines each contain two integers <code>u</code> and <code>v</code>, indicating an edge between nodes <code>u</code> and <code>v</code>.</li>
    <li>The following line contains <code>n</code> integers <code>init1</code>, <code>init2</code>, ..., <code>initn</code>, representing the initial values of the nodes.</li>
    <li>The last line contains <code>n</code> integers <code>goal1</code>, <code>goal2</code>, ..., <code>goaln</code>, representing the target values for the nodes.</li>
</ul>

<h2>Output</h2>
<p>On the first line, output the number <code>t</code>, which represents the number of operations performed.</p>
<p>For each of the following <code>t</code> lines, output the integer <code>x</code>, indicating that the operation was performed on node <code>x</code>.</p>

<h2>Constraints</h2>
<ul>
    <li><code>1 ≤ n ≤ 100000</code></li>
    <li><code>1 ≤ ui, vi ≤ n</code>, and <code>ui ≠ vi</code></li>
</ul>

<h2>Example</h2>
<h3>Example 1</h3>
<pre><code>Input:
10
2 1
3 1
4 2
5 1
6 2
7 5
8 6
9 8
10 5
1 0 1 1 0 1 0 1 0 1
1 0 1 0 0 1 1 1 0 1

Output:
2
4
7
</code></pre>
