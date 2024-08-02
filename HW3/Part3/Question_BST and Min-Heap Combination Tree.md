<h2>Problem Statement</h2>
<p>Hadid and Daneshvar want to build a tree to overcome their daily routine! Hadid wants the final tree to be a BST (Binary Search Tree), but Daneshvar prefers a min-heap and wants to build a min-heap. Therefore, they decided to create a tree that is a combination of both a BST and a min-heap!</p>

<p>Hadid and Daneshvar have written <code>n</code> pairs of integers: (<code>a<sub>1</sub></code>, <code>b<sub>1</sub></code>), (<code>a<sub>2</sub></code>, <code>b<sub>2</sub></code>), ..., (<code>a<sub>n</sub></code>, <code>b<sub>n</sub></code>). Each pair corresponds to a node in the final tree. They want to construct the tree in such a way that, if only the first component of the pairs is considered, the tree is a BST; and if only the second component of the pairs is considered, the final tree is a min-heap.</p>

<p>In a BST, the value of each node is greater than the values of all nodes in its left subtree and smaller than the values of all nodes in its right subtree. In a min-heap, the value of each node is smaller than the values of its children.</p>

<p>Note that Daneshvar does not require the min-heap tree to be complete; it only needs to satisfy the above condition.</p>

<h2>Input</h2>
<p>The first line contains the integer <code>n</code>, the number of pairs.</p>
<p>In the next <code>n</code> lines, each line contains two integers <code>a<sub>i</sub></code> and <code>b<sub>i</sub></code> representing the <code>i<sup>th</sup></code> pair.</p>

<h2>Output</h2>
<p>If it is not possible to construct such a tree, output "NO". Otherwise, output "YES" on the first line, followed by <code>n</code> lines. Each line should contain three integers: the index of the parent, the index of the left child, and the index of the right child for the <code>i<sup>th</sup></code> node. If any of these does not exist, output 0 for that index.</p>

<h2>Constraints</h2>
<ul>
    <li><code>1 ≤ n ≤ 1000</code></li>
    <li><code>1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup></code></li>
    <li><code>1 ≤ b<sub>i</sub> ≤ 10<sup>9</sup></code></li>
    <li>It is guaranteed that <code>a<sub>i</sub></code> and <code>b<sub>i</sub></code> are distinct for all <code>i ≠ j</code>.</li>
</ul>

<h2>Example</h2>
<h3>Example 1</h3>
<pre><code>Input:
3
2 3
1 5
3 8

Output:
YES
0 2 3
1 0 0
1 0 0
</code></pre>
<p>The second component of node 1 is the smallest among the 3 nodes; thus, this node will be the root of the tree. According to the first component of node 1 (which is 2), node 2 will be the left child and node 3 will be the right child.</p>
