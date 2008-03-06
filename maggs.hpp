#ifndef MAGGS_HPP
#define MAGGS_HPP

#include "grid.hpp"
#include "field.hpp"

#include <blitz/blitz.h>
#include <blitz/array.h>
#include <blitz/tiny.h>
#include <blitz/tinyvec.h>

void loop_move(blitz::Array<blitz::TinyVector<double,3>,3> & electric_field,
               const Grid & grid,
               const Loop & loop);

void sequential_sweep_loop_moves(blitz::Array<blitz::TinyVector<double,3>,3> & electric_field, 
                                 const Grid & grid);
void random_sweep_loop_moves(blitz::Array<blitz::TinyVector<double,3>,3> & electric_field, 
                             const Grid & grid);


#if 0
void loop_move(VField & electric_field,const Grid & grid,const Loop & loop);

void sequential_sweep_loop_moves(Array<TinyVector<double,3>,3> & electric_field, 
                                 const Grid & grid);
void random_sweep_loop_moves(Array<TinyVector<double,3>,3> & electric_field, 
                             const Grid & grid);
#endif


#endif
