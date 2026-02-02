
import java.util.ArrayList;

class Edge {

    int src;
    int dest;
}

class Graph {

    int totalEdges;
    int totalVertices;
    ArrayList<Edge> edges;

    public Graph(int totalEdges, int totalVertices) {
        this.totalVertices = totalVertices;
        this.totalEdges = totalEdges;
        this.edges = new ArrayList<>();
    }

    void addEdge(int src, int dest) {
        Edge e = new Edge();
        e.src = src;
        e.dest = dest;
        edges.add(e);

        Edge e2 = new Edge();
        e2.src = dest;
        e2.dest = src;
        edges.add(e2);

    }

}

class Bfs {

    public static void main(String[] args) {

        Graph g = new Graph(15, 10);

        g.addEdge(9, 6);
        g.addEdge(6, 2);
        g.addEdge(2, 1);
        g.addEdge(1, 8);
        g.addEdge(8, 19);
        g.addEdge(19, 3);
        g.addEdge(3, 5);

        g.addEdge(5, 9);
        g.addEdge(9, 4);
        g.addEdge(4, 7);
        g.addEdge(7, 19);
        g.addEdge(4, 3);
        g.addEdge(7, 8);
        g.addEdge(7, 1);
        g.addEdge(7, 6);

        for (Edge e : g.edges) {
            System.out.println(e.src+" is connected with : ");
            for (Edge x : g.edges) {
                if(e.src == x.src){
                    System.out.println(x.dest);
                }      
            }
        }

    }

}