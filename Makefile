LinkedList: List/test.cpp
	g++ -o LinkedListTest List/test.cpp List/SLinkedList.cpp 
	./LinkedListTest
main:
	g++ main.cpp -o main
	./main
TopoSort:
	g++ Sorting/TopologySort.cpp -o TopoSort
	./TopoSort
DFS:
	clang++ Graph/DepthFirstSearch.cpp -o Graph/DFS
