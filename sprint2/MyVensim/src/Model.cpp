#include "Model.hpp"
#include <vector>
Model::Model(){};
Model::Model(Model &model){
		flow_container = model.flow_container;
		system_container = model.system_container;
}
void Model::add(Flow* flow){
	flow_container.push_back(flow);
}

void Model::add(System* system){
	system_container.push_back(system);
}

void Model::setFlowContainer(const vector<Flow*>& flowContainer) {
	flow_container = flowContainer;
}

void Model::report(){	int i=0;
	for_each(system_container.begin(),system_container.end(),[&i](System* s){ cout << s->getName() << ": " << fixed << setprecision(4) << s->getStock() << "\t"; i++;});
	cout << endl;
}

void Model::setSystemContainer(const vector<System*>& systemContainer) {
	system_container = systemContainer;
}

const vector<Flow*>& Model::getFlowContainer() const {
	return flow_container;
}
const vector<System*>& Model::getSystemContainer() const {
	return system_container;
}

void Model::execute(int t_start, int t_end,int shift){	
	vector <double> results;
	int i;
	for(int time = t_start ; time < t_end ; time = time + shift)
	{
		for_each(flow_container.begin(),flow_container.end(),[&results](Flow* f){
			results.push_back(f->equation());
			});
		i=0;
		for_each(flow_container.begin(),flow_container.end(),[&i,&results](Flow* f){double aux = f->getSource()->getStock();
																			f->getSource()->setStock(aux - results[i]);
																			aux = f->getTarget()->getStock();
																			f->getTarget()->setStock(aux + results[i]);	i++;});
		//report();
		results.clear();
	}
}
