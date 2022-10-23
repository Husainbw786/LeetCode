adj[edges[i][1]].push_back(edges[i][0]);
}
for(i = 0; i < n; i++)
{
for(int j = 0; j < adj[i].size(); j++)
{
cout << adj[i][j] << " ";
}
cout << endl;
}
return true;
}
};
​
*******************************
​