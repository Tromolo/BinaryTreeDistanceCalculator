#include "BinaryTree.h"
#include "Node.h"

BinaryTree::BinaryTree(int key)
{
	root = new Node(key);
    ans = 0;
}

int BinaryTree::_findDistance(Node* root, int n1, int n2)
{
    if (!root) {
        return 0;
    }

    int left = _findDistance(root->left, n1, n2);
    int right = _findDistance(root->right, n1, n2);     
    if (root->key == n1 || root->key == n2) {          
                                                   
        if (left || right) {                       
            ans = max(left, right);
            return 0;
        }
        else
            return 1;
    }
    else if (left && right) { 
        ans = left + right;
        return 0;
    }
    else if (left || right)    
        return max(left, right) + 1;  

    return 0;
}

int BinaryTree::findDistance(int n1, int n2)  
{
	ans = 0;
	_findDistance(root, n1, n2);    
	return ans;
}

bool BinaryTree::isNodeInTree(Node* root, int target)
{
    if (!root)
        return false;
    if (root->key == target)
        return true;

    return isNodeInTree(root->left, target) || isNodeInTree(root->right, target);
}

void BinaryTree::printDistances(int source)
{
    map<int, int> distances;       

    for (int i = 1; i <= 10; i++) {       
        if (isNodeInTree(root, i)) {
            int distance = findDistance(source, i);
            distances[i] = distance;
        }
    }

    vector<pair<int, int>> sortedDistances(distances.begin(), distances.end());
    sort(sortedDistances.begin(), sortedDistances.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
        });
            
    cout << "Vzdialenosti od node " << source << endl;
    for (const auto& item : sortedDistances) {
        cout << "to " << item.first << " = " << item.second << endl;
    }
}