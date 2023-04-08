/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution
{
    void dfs(Node *x, Node *node, vector<Node *> &visited)
    {
        visited[node->val] = node;
        for (auto y : x->neighbors)
        {
            if (visited[y->val] == NULL)
            {
                Node *newnode = new Node(y->val);
                (node->neighbors).push_back(newnode);
                dfs(y, newnode, visited);
            }
            else
                (node->neighbors).push_back(visited[y->val]);
        }
    }

public:
    Node *cloneGraph(Node *node)
    {
        // Traverse all nodesof the original graph and as soon as we reach a node, we will make a copy node and reccur for the rest of the graph
        // O(E.V)
        // DFS
        if (node == NULL)
            return NULL;

        vector<Node *> visited(1000, NULL);
        Node *copy = new Node(node->val);
        visited[node->val] = copy;

        for (auto x : node->neighbors)
        {
            if (visited[x->val] == NULL)
            {
                Node *newnode = new Node(x->val);
                (copy->neighbors).push_back(newnode);
                dfs(x, newnode, visited);
            }
            else
                (copy->neighbors).push_back(visited[x->val]);
        }
        return copy;
    }
};