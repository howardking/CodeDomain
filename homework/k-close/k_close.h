#ifndef K_CLOSE_H_INCLUDED
#define K_CLOSE_H_INCLUDED

#include "k_close_heads.h"
#include "s_sample.h"
#include "s_mark.h"

class c_k_close {
    public:
	c_k_close();
	void m_classification(int k);
	void m_preprocess(int space);
	void m_sort();
private:
	float m_distance(s_sample a,s_sample b);
	void m_insert(int id,float distance,int m);

	s_sample s_train[maxN];
	s_sample s_test[maxN];
	int p_pretrain[maxN];
	int p_train_sample_num;
	int p_test_sample_num;
	int p_pretrain_sample_num;
	s_mark mark[10];
};

#endif // K_CLOSE_H_INCLUDED
