#include <iostream>
#include "DiGraph.hpp"
#include <SDL2/SDL.h>
#include <thread>
#include <chrono>
using namespace std;

// Example: Ring with chords
void makeRingWithChords(DiGraph& g) {
    int n = 8;
    for (int i = 0; i < n; ++i) {
        g.addEdge(i, (i+1)%n, i);
    }
    g.addEdge(0, 4, 1);
    g.addEdge(1, 5, 1);
    g.addEdge(2, 6, 1);
    g.addEdge(3, 7, 1);
}

// Example: Star
void makeStar(DiGraph& g) {
    int n = 7;
    for (int i = 1; i < n; ++i) {
        g.addEdge(0, i, i);
    }
}

// Example: Grid (3x3)
void makeGrid(DiGraph& g) {
    int n = 3;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int idx = i * n + j;
            if (j < n-1) g.addEdge(idx, idx+1, i+1);
            if (i < n-1) g.addEdge(idx, idx+n, j+1);
        }
    }
}

// Example: Complete graph
void makeComplete(DiGraph& g) {
    int n = 6;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            g.addEdge(i, j, i+j);
        }
    }
}

// Example: Tree
void makeTree(DiGraph& g) {
    g.addEdge(0, 1, 1);
    g.addEdge(0, 2, 2);
    g.addEdge(1, 3, 3);
    g.addEdge(1, 4, 4);
    g.addEdge(2, 5, 5);
    g.addEdge(2, 6, 6);
}


void makeGraphCourseExampleTopolSort(DiGraph& g) {
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(0,3,1);
    g.addEdge(3,4,1);
    g.addEdge(2,3,1);
    g.addEdge(2,4,1);
} 



// wikipedial example for the topol sort
void makeGraphWikiExample(DiGraph& g) {
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(3,1,1);
    g.addEdge(3,4,1);
    g.addEdge(4,5,1);
    g.addEdge(7,4,1);
    g.addEdge(7,6,1);
    g.addEdge(1,5,1);
    g.addEdge(1,6,1);

}


void makeDirectedCyclicGraph(DiGraph& g) {
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(3,1,1);
}

int main(int, char**){
    // Choose one example:
    // DiGraph graph(8); makeRingWithChords(graph);
    // DiGraph graph(7); makeStar(graph);
    // DiGraph graph(7); makeTree(graph);




    // DiGraph graph(9); makeGrid(graph);
    // DiGraph graph(6); makeComplete(graph);
    // DiGraph graph(8); makeRingWithChords(graph); 
    // DiGraph graph(6); makeGraphCourseExampleTopolSort(graph);
    // DiGraph graph(8); makeGraphWikiExample(graph);
    
    DiGraph graph(4); makeDirectedCyclicGraph(graph);

    
    // graph.printOutDeg();
    // graph.printInDeg();

    // graph.printMat();

    graph.topolSort();






}

// -------- DRAW SDL STUFF

// if (SDL_Init(SDL_INIT_VIDEO) < 0) {
//     cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << endl;
//     return 1;
// }
// SDL_Window* window = SDL_CreateWindow("Graph Visualization", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
// if (!window) {
//     cerr << "Window could not be created! SDL_Error: " << SDL_GetError() << endl;
//     SDL_Quit();
//     return 1;
// }
// SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
// if (!renderer) {
//     cerr << "Renderer could not be created! SDL_Error: " << SDL_GetError() << endl;
//     SDL_DestroyWindow(window);
//     SDL_Quit();
//     return 1;
// }

// // Draw initial graph
// SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
// SDL_RenderClear(renderer);
// graph.drawSDL(renderer, 800, 600);
// SDL_RenderPresent(renderer);
// std::this_thread::sleep_for(std::chrono::milliseconds(1200));

// // Run BFS to mark SPAN_EDGE
// graph.traverseGraph_BFS();

// // Draw graph with spanning tree (SPAN_EDGE in red)
// SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
// SDL_RenderClear(renderer);
// graph.drawSDL(renderer, 800, 600);
// SDL_RenderPresent(renderer);

// // Wait for quit event
// bool quit = false;
// SDL_Event e;
// while (!quit) {
//     while (SDL_PollEvent(&e)) {
//         if (e.type == SDL_QUIT) quit = true;
//     }
//     std::this_thread::sleep_for(std::chrono::milliseconds(50));
// }
// SDL_DestroyRenderer(renderer);
// SDL_DestroyWindow(window);
// SDL_Quit();
