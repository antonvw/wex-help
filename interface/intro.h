////////////////////////////////////////////////////////////////////////////////
// Name:      intro.h
// Purpose:   Interface file containing Doxyfile reference for mainpage
// Author:    Anton van Wezenbeek
// Copyright: (c) 2017-2022 Anton van Wezenbeek
////////////////////////////////////////////////////////////////////////////////

/*!
\mainpage wex Main Page

This is a <a href="https://antonvw@github.com/antonvw/wex.git">
public source code library</a> containing a collection of 
classes to support vi and ex functionality
in wxStyledTextCtrl derived classes.

<p>
For build instructions see 
<a href="https://github.com/antonvw/wex/blob/v22.04.0/README.md">README</a>.
</p>

\dot
digraph libs {
  boost     [URL="https://www.boost.org"]
  ctags     [URL="https://github.com/universal-ctags/ctags"]
  doctest   [URL="https://github.com/onqtam/doctest"]
  otl       [URL="http://otl.sourceforge.net/"]
  pugixml   [URL="https://github.com/zeux/pugixml"]
  rfw       [URL="https://robotframework.org"]
  wxWidgets [URL="http://docs.wxwidgets.org/3.1"]

  del     [shape=box, tooltip="this library contains integration classes, also performs final integraton of factory classes, and invokes static initialization and exit methods"];
  stc     [shape=box, tooltip="this library contains stc classes and functions"];
  vi      [shape=box, tooltip="this library contains vi (ex) classes and functions"];
  ui      [shape=box, tooltip="this library contains ui classes (frame, grid, list, menu, notebook, statusbar), and functions"];
  common  [shape=box, tooltip="this library contains common classes"];
  data    [shape=box, tooltip="this library contains data injection classes"];
  factory [shape=box, tooltip="this library contains factory classes, with virtual methods for derived classes"];
  core    [shape=box, tooltip="this library contains core classes and functions, and does not use any other wex libraries"];
  
  test_app     [label="test-app",     fontsize=9, shape=diamond, color=grey];
  sample       [label="sample",       fontsize=9, shape=diamond, color=grey];
  test_del     [label="test-del",     fontsize=9, shape=diamond, color=grey];
  test_stc     [label="test-stc",     fontsize=9, shape=diamond, color=grey];
  test_vi      [label="test-vi",      fontsize=9, shape=diamond, color=grey];
  test_ui      [label="test-ui",      fontsize=9, shape=diamond, color=grey];
  test_common  [label="test-common",  fontsize=9, shape=diamond, color=grey];
  test_data    [label="test-data",    fontsize=9, shape=diamond, color=grey];
  test_factory [label="test-factory", fontsize=9, shape=diamond, color=grey];
  test_core    [label="test-core",    fontsize=9, shape=diamond, color=grey];
  
  {rank=same test_del test_stc test_vi test_ui test_common test_data test_factory test_core }
  
  del     -> stc;
  stc     -> vi;
  vi      -> {ui, ctags};
  ui      -> {common, otl};
  common  -> data;
  data    -> factory;
  factory -> core;
  core    -> {wxWidgets, boost, pugixml};
  
  test_app     -> {sample, rfw} [style=dashed, color=grey];
  sample       -> del [style=dashed, color=grey];
  test_del     -> {del, doctest} [style=dashed, color=grey];
  test_stc     -> {stc, doctest} [style=dashed, color=grey];
  test_vi      -> {vi, doctest} [style=dashed, color=grey];
  test_ui      -> {ui, doctest} [style=dashed, color=grey];
  test_common  -> {common, doctest} [style=dashed, color=grey];
  test_data    -> {data, doctest} [style=dashed, color=grey];
  test_factory -> {factory, doctest} [style=dashed, color=grey];
  test_core    -> {core, doctest} [style=dashed, color=grey];
 }
\enddot
*/
