////////////////////////////////////////////////////////////////////////////////
// Name:      intro.h
// Purpose:   Interface file containing Doxyfile reference for mainpage
// Author:    Anton van Wezenbeek
// Copyright: (c) 2021 Anton van Wezenbeek
////////////////////////////////////////////////////////////////////////////////

/*!
\mainpage wex Main Page

This is a <a href="https://antonvw@github.com/antonvw/wex.git">
public source code library</a> containing a collection of 
classes to support vi and ex functionality
in wxStyledTextCtrl derived classes.

<p>
It uses <a href="http://docs.wxwidgets.org/3.1/">wxWidgets 3.1</a>,
<a href="http://www.cplusplus.com/reference/algorithm/">STL classes</a> and
<a href="https://www.boost.org"> boost classes</a>.
</p>

<p>
There are also some classes to support database programming using the 
<a href="http://otl.sourceforge.net/">Oracle and ODBC Template Library</a>.
</p>

<p>
For build instructions see 
<a href="https://github.com/antonvw/wex/blob/v21.10.0/README.md">README</a>.
</p>

\dot
digraph libs {
  del [shape="box"];
  stc [shape="box"];
  vi [shape="box"];
  ui [shape="box"];
  common [shape="box"];
  data [shape="box"];
  factory [shape="box"];
  core [shape="box"];
  
  del     -> stc;
  stc     -> vi;
  vi      -> ctags;
  vi      -> ui;
  ui      -> common;
  ui      -> otl;
  common  -> data;
  data    -> factory;
  factory -> core;
  core    -> wxWidgets;
  core    -> Boost;
  core    -> json;
  core    -> pugixml;
 }
\enddot
*/
