// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Drawable>
#include <osg/Matrix>
#include <osg/RenderInfo>
#include <osgUtil/RenderLeaf>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osgUtil/StateGraph>
	
BEGIN_OBJECT_REFLECTOR(osgUtil::RenderLeaf)
	I_DeclaringFile("osgUtil/RenderLeaf");
	I_BaseType(osg::Referenced);
	I_ConstructorWithDefaults5(IN, osg::Drawable *, drawable, , IN, osg::RefMatrix *, projection, , IN, osg::RefMatrix *, modelview, , IN, float, depth, 0.0f, IN, unsigned int, traversalNumber, 0,
	                           ____RenderLeaf__osg_Drawable_P1__osg_RefMatrix_P1__osg_RefMatrix_P1__float__unsigned_int,
	                           "",
	                           "");
	I_MethodWithDefaults5(void, set, IN, osg::Drawable *, drawable, , IN, osg::RefMatrix *, projection, , IN, osg::RefMatrix *, modelview, , IN, float, depth, 0.0f, IN, unsigned int, traversalNumber, 0,
	                      Properties::NON_VIRTUAL,
	                      __void__set__osg_Drawable_P1__osg_RefMatrix_P1__osg_RefMatrix_P1__float__unsigned_int,
	                      "",
	                      "");
	I_Method0(void, reset,
	          Properties::NON_VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method2(void, render, IN, osg::RenderInfo &, renderInfo, IN, osgUtil::RenderLeaf *, previous,
	          Properties::VIRTUAL,
	          __void__render__osg_RenderInfo_R1__RenderLeaf_P1,
	          "",
	          "");
	I_Method0(const osg::Drawable *, getDrawable,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Drawable_P1__getDrawable,
	          "",
	          "");
	I_SimpleProperty(const osg::Drawable *, Drawable, 
	                 __C5_osg_Drawable_P1__getDrawable, 
	                 0);
	I_PublicMemberProperty(osgUtil::StateGraph *, _parent);
	I_PublicMemberProperty(osg::ref_ptr< osg::Drawable >, _drawable);
	I_PublicMemberProperty(osg::ref_ptr< osg::RefMatrix >, _projection);
	I_PublicMemberProperty(osg::ref_ptr< osg::RefMatrix >, _modelview);
	I_PublicMemberProperty(float, _depth);
	I_PublicMemberProperty(bool, _dynamic);
	I_PublicMemberProperty(unsigned int, _traversalNumber);
END_REFLECTOR

