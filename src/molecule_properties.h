/*************************************************************************************************************
    RASPA: a molecular-dynamics, monte-carlo and optimization code for nanoporous materials
    Copyright (C) 2006-2015 David Dubbeldam, Sofia Calero, Thijs Vlugt, Donald E. Ellis, and Randall Q. Snurr.

    D.Dubbeldam@uva.nl            http://molsim.science.uva.nl/
    scaldia@upo.es                http://www.upo.es/raspa/
    t.j.h.vlugt@tudelft.nl        http://homepage.tudelft.nl/v9k6y
    don-ellis@northwestern.edu    http://dvworld.northwestern.edu/
    snurr@northwestern.edu        http://zeolites.cqe.northwestern.edu/

    This file 'molecule_properties.h' is part of RASPA-2.0

    RASPA is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    RASPA is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *************************************************************************************************************/

#ifndef MOLECULE_PROPERTIES_H
#define MOLECULE_PROPERTIES_H

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

REAL ComputeBondDistanceFramework(int index);
REAL ComputeBendAngleFramework(int index);
REAL ComputeTorsionAngleFramework(int index);

REAL ComputeBondDistanceAdsorbate(int m,int index);
REAL ComputeBondDistanceCation(int m,int index);

REAL ComputeUreyBradleyDistanceAdsorbate(int m,int index);
REAL ComputeUreyBradleyDistanceCation(int m,int index);

REAL ComputeBendAngleAdsorbate(int m,int index);
REAL ComputeBendAngleCation(int m,int index);

REAL ComputeTorsionAngleAdsorbate(int m,int index);
REAL ComputeTorsionAngleCation(int m,int index);

int ReturnTorsionConformation(REAL theta);

#endif
