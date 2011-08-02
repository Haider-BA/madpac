// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_FAXEN_LBANDFAXEN_RegularGridBlockCell_H_ 
#define _PEANO_APPLICATIONS_FAXEN_LBANDFAXEN_RegularGridBlockCell_H_


#include "peano/applications/faxen/lbf/records/RegularGridBlockCell.h"
#include "peano/kernel/regulargrid/Cell.h"


namespace peano { 
namespace applications {
namespace faxen {
namespace lbf {
class RegularGridBlockCell;
}
}
}
}


/**
 * Blueprint for regular grid cell.
 * 
 * This file has originally been created by PeProt and may be manually adapted to 
 * the needs of your application. We do not recommend to remove anything!
 * 
 * \author PeProt
 */


class peano::applications::faxen::lbf::RegularGridBlockCell: public peano::kernel::regulargrid::Cell< peano::applications::faxen::lbf::records::RegularGridBlockCell > {
private:
	typedef class peano::kernel::regulargrid::Cell< peano::applications::faxen::lbf::records::RegularGridBlockCell >  Base;

public:
	/**
	 * Default Constructor
	 *
	 * This constructor is required by the framework's data container. Do not
	 * remove it.
	 */
	RegularGridBlockCell();

	/**
	 * Constructor
	 *
	 * This constructor is required by the framework's data container. Do not
	 * remove it. It is kind of a copy constructor that converts an object which
	 * comprises solely persistent attributes into a full attribute. This very
	 * functionality is implemented within the super type, i.e. this constructor
	 * has to invoke the correponsing super type's constructor and not the super
	 * type standard constructor.
	 */
	RegularGridBlockCell(const Base::PersistentCell& argument);

	/**
	 * Proxies for the Faxen component
	 */

	/**
	 * Proxy for getting pressure in a cell
	 */
	double getP() const;

	/**
	 * Proxy for setting pressure in a cell
	 *
	 * @param P New pressure value.
	 */
	void setP(const double& P);

	/**
	 * Proxy for getting horizontal velocity in a cell
	 */
	double getU() const;

	/**
	 * Proxy for setting horizontal velocity in a cell
	 *
	 *  @param U New horizontal velocity value.
	 */
	void setU(const double& U);

	/**
	 * Proxy for getting vertical velocity in a cell
	 */
	double getV() const;

	/**
	 * Proxy for setting vertical velocity in a cell
	 *
	 *  @param V New vertical velocity value.
	 */
	void setV(const double& V);


	/**
	 * Proxy for getting F in a cell
	 */
	double getF() const;

	/**
	 * Proxy for setting F in a cell
	 *
	 *  @param F New F value.
	 */
	void setF(const double& F);

	/**
	 * Proxy for getting G in a cell
	 */
	double getG() const;

	/**
	 * Proxy for setting G in a cell
	 *
	 *  @param G New G value.
	 */
	void setG(const double& G);

	/**
	 * Proxy for getting right hand side for pressure equation
	 */
	double getRhs() const;

	/**
	 * Proxy for setting right hand side for pressure equation
	 *
	 *  @param rhs New right hand side value.
	 */
	void setRhs(const double& rhs);

	/**
	 * Proxy for getting residual in a cell
	 */
	double getRes() const;

	/**
	 * Proxy for setting residual in a cell
	 *
	 *  @param res New residual value.
	 */
	void setRes(const double& res);
};


#endif
