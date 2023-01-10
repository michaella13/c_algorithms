bfsSearch(auto root){
	list <int> queue;
	queue.push_back(root);
	while(!queue.empty()){
	auto current=queue.front()	;
	int size=queue.size();
	while(size>0){
	
	cout<<current->value<<"->";
	for (auto child:current->children){
		queue.push_back(child);
	}
	queue.pop_front();
	size--;
	}
	cout<<endl;
	}
}
