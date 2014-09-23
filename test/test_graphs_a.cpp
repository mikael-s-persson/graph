// Copyright Sven Mikael Persson 2013.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include "test_graphs_incl.hpp"

template <typename VertexProp, typename EdgeProp>
struct graphtype_list {
  
  typedef mpl::list< 
    adjacency_list_BC< EDGE_STORAGE_TYPE,  vecBC,  bidirectionalS, VertexProp, EdgeProp>,
    adjacency_list_BC< EDGE_STORAGE_TYPE,  listBC, bidirectionalS, VertexProp, EdgeProp>,
    adjacency_list_BC< EDGE_STORAGE_TYPE,  poolBC, bidirectionalS, VertexProp, EdgeProp>,
    adjacency_list_BC< EDGE_STORAGE_TYPE,  vecBC,  directedS, VertexProp, EdgeProp>,
    adjacency_list_BC< EDGE_STORAGE_TYPE,  listBC, directedS, VertexProp, EdgeProp>,
    adjacency_list_BC< EDGE_STORAGE_TYPE,  poolBC, directedS, VertexProp, EdgeProp>,
    adjacency_list_BC< EDGE_STORAGE_TYPE,  vecBC,  undirectedS, VertexProp, EdgeProp>,
    adjacency_list_BC< EDGE_STORAGE_TYPE,  listBC, undirectedS, VertexProp, EdgeProp>,
    adjacency_list_BC< EDGE_STORAGE_TYPE,  poolBC, undirectedS, VertexProp, EdgeProp> 
  > types;
  
};

typedef graphtype_list<int, int>::types intint_graphtest_types;

#include "test_graphs_impl.hpp"






