def infix_to_postfix(infix):
    precedence = {'+': 1, '-': 1, '*': 2, '/': 2}
    output = []
    operators = []
    
    for char in infix:
        if char.isdigit():
            output.append(char)
        elif char == '(':
            operators.append(char)
        elif char == ')':
            while operators and operators[-1] != '(':
                output.append(operators.pop())
            operators.pop()  # Remove '('
        else:  # Operator
            while (operators and operators[-1] != '(' and
                   precedence[char] <= precedence.get(operators[-1], 0)):
                output.append(operators.pop())
            operators.append(char)
    
    while operators:
        output.append(operators.pop())
    
    return ''.join(output)

def postfix_to_prefix(postfix):
    stack = []
    
    for char in postfix:
        if char.isdigit():
            stack.append(char)
        else:
            op2 = stack.pop()
            op1 = stack.pop()
            stack.append(char + op1 + op2)
    
    return stack[0]

def infix_to_prefix(infix):
    postfix_expr = infix_to_postfix(infix)
    return postfix_to_prefix(postfix_expr)

def prefix_to_postfix(prefix):
    stack = []
    
    for char in reversed(prefix):
        if char.isdigit():
            stack.append(char)
        else:
            op1 = stack.pop()
            op2 = stack.pop()
            stack.append(op1 + op2 + char)
    
    return stack[0]

def convert_expression(expression):
    if '(' in expression or ')' in expression:
        # Infix to Prefix
        return infix_to_prefix(expression)
    else:
        # Prefix to Postfix
        return prefix_to_postfix(expression)

if __name__ == "__main__":
    import sys
    input_expression = sys.stdin.read().strip()
    print(convert_expression(input_expression))
