#ifndef CHYPERGRAPH_H
#define CHYPERGRAPH_H
#include <string>
#include <map>
using namespace std;
class CHypergraph
{
public:
	string						hyperstring;
	string						verticestring;
	string						answerstring;
	int							nvtxs;
	int							trueNvtxs;
	int                        nhedges;
	int							*vwgts;
	int							*eptr;
	int							*eind;
	int							*hewgts;
	int							npart;
	int							ubfactor;
	int							*part;
	int							*inOptions;
	CHypergraph           *fatherGraph;
	CHypergraph			*leftSon;
	CHypergraph			*rightSon;
	float						coupling;
	float						cohesion;
	int							floor;
	double					Modu;
	bool                      is_parted;
	map<int,int> mapForG1;
	map<int,int> mapForG2;
	map<int,int> mapForFather;
	CHypergraph();
	//CHypergraph(int nvtxs,)

};
#endif