/*--------------------------------------------------------------*/
/* oa.h --							*/
/* OpenAccess database support for magic			*/
/* 								*/
/* Written by R. Timothy Edwards 4/22/04			*/
/* Open Circuit Design, Inc. for				*/
/* MultiGiG, Inc., Scotts Valley, CA				*/
/*--------------------------------------------------------------*/

#ifndef OA_H
#define OA_H

/* Header file is wrapped in ifdef so include statements don't	*/
/* need to be.							*/
#ifdef OPENACCESS

/* Internally defined forward declarations */
extern int OACellSearch();
extern int oaTreeCellSrFunc();		/* see DBcellsrch.c */

#endif	/* OPENACCESS */

#endif /* OA_H */
