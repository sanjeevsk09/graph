import networkx as nx
import matplotlib.pyplot as plt

# Create an empty graph
G = nx.Graph()

# Add nodes
G.add_node(1)
G.add_node(2)
G.add_node(3)
G.add_node(4)

# Add edges
G.add_edge(1, 2)
G.add_edge(2, 3)
G.add_edge(3, 4)
G.add_edge(4, 1)

# Draw the graph
pos = nx.spring_layout(G)  # Define node positions using a layout algorithm
nx.draw(G, pos, with_labels=True, node_size=500, node_color="skyblue", font_size=12, font_color="black")
plt.title("Simple Graph")
plt.show()

# Get information about the graph
print("Nodes:", G.nodes())
print("Edges:", G.edges())
print("Number of nodes:", G.number_of_nodes())
print("Number of edges:", G.number_of_edges())

# Check if nodes and edges exist
print("Node 1 exists:", G.has_node(1))
print("Edge (2, 3) exists:", G.has_edge(2, 3))
