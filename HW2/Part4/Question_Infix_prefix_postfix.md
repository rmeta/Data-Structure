<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Infix and Prefix/Postfix Conversion</title>
</head>
<body>
    <h1>Infix and Prefix/Postfix Conversion</h1>
    <p>
        Ehsan is having trouble converting between infix, prefix, and postfix expressions. Help Ehsan by converting an infix expression to prefix notation if provided, or converting a prefix expression to postfix notation if provided. This will allow Ehsan to easily obtain the prefix and postfix notations of an infix expression with two uses of the program.
    </p>

    <h2>Input</h2>
    <p>
        A single line containing a mathematical expression with up to 1000 characters. The expression will include single-digit non-negative integers and operators such as `+`, `-`, `*`, `/`, and parentheses `(` and `)`.
    </p>

    <h2>Output</h2>
    <p>
        On a single line, if the input is an infix expression, print the prefix notation of the expression. If the input is a prefix expression, print the postfix notation of the expression.
    </p>

    <h2>Constraints</h2>
    <ul>
        <li>1 ≤ |input| ≤ 1000</li>
    </ul>

    <h2>Examples</h2>
    <h3>Example 1</h3>
    <pre>
Input:
(1-2/3)*(1/4-5)

Output:
*-1/23-/145
    </pre>

    <h3>Example 2</h3>
    <pre>
Input:
*-1/23-/145

Output:
123/-14/5-*
    </pre>
</body>
</html>
