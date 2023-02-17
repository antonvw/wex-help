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
  ctags_uni [label="ctags-universal", URL="https://github.com/universal-ctags/ctags"]
  doctest   [URL="https://github.com/onqtam/doctest"]
  otl       [URL="http://otl.sourceforge.net/"]
  pugixml   [URL="https://github.com/zeux/pugixml"]
  rfw       [URL="https://robotframework.org"]
  wxWidgets [URL="http://docs.wxwidgets.org/3.2"]

  del     [label="libwex-del", shape=box, fontsize=8, tooltip="this library contains integration classes, also performs final integraton of factory classes, and invokes static initialization and exit methods"];
  vcs     [label="libwex-vcs", shape=box, fontsize=8, tooltip="this library contains vcs and debug classes"];
  stc     [label="libwex-stc", shape=box, fontsize=8, tooltip="this library contains stc classes and functions"];
  vi      [label="libwex-vi", shape=box, fontsize=8, tooltip="this library contains vi classes and functions"];
  ex      [label="libwex-ex", shape=box, fontsize=8, tooltip="this library contains ex classes and functions"];
  ctags   [label="libwex-ctags", shape=box, fontsize=8, tooltip="this library contains ctags classes and functions"];
  ui      [label="libwex-ui", shape=box, fontsize=8, tooltip="this library contains ui classes (frame, grid, list, menu, notebook, statusbar), and functions"];
  common  [label="libwex-common", shape=box, fontsize=8, tooltip="this library contains common classes"];
  data    [label="libwex-data", shape=box, fontsize=8, tooltip="this library contains data injection classes"];
  syntax  [label="libwex-syntax", shape=box, fontsize=8, tooltip="this library contains syntax lexer classes"];
  factory [label="libwex-factory", shape=box, fontsize=8, tooltip="this library contains factory classes, with virtual methods for derived classes"];
  core    [label="libwex-core", shape=box, fontsize=8, tooltip="this library contains core classes and functions, and does not use any other wex libraries"];
  
  test_app     [label="wex-test-app",     fontsize=8, shape=diamond, color=grey];
  sample       [label="wex-sample",       fontsize=8, shape=diamond, color=grey];
  test_del     [label="wex-test-del",     fontsize=8, shape=diamond, color=grey];
  test_vcs     [label="wex-test-vcs",     fontsize=8, shape=diamond, color=grey];
  test_stc     [label="wex-test-stc",     fontsize=8, shape=diamond, color=grey];
  test_vi      [label="wex-test-vi",      fontsize=8, shape=diamond, color=grey];
  test_ex      [label="wex-test-ex",      fontsize=8, shape=diamond, color=grey];
  test_ctags   [label="wex-test-ctags",   fontsize=8, shape=diamond, color=grey];
  test_ui      [label="wex-test-ui",      fontsize=8, shape=diamond, color=grey];
  test_common  [label="wex-test-common",  fontsize=8, shape=diamond, color=grey];
  test_data    [label="wex-test-data",    fontsize=8, shape=diamond, color=grey];
  test_syntax  [label="wex-test-syntax",  fontsize=8, shape=diamond, color=grey];
  test_factory [label="wex-test-factory", fontsize=8, shape=diamond, color=grey];
  test_core    [label="wex-test-core",    fontsize=8, shape=diamond, color=grey];
  
  {rank=same test_del test_vcs test_stc test_vi test_ex test_ui 
   test_common test_data test_syntax test_factory test_core test_app}
  
  del     -> vcs;
  vcs     -> stc;
  stc     -> vi;
  vi      -> ex;
  ex      -> ctags;
  ctags   -> {ui, ctags_uni};
  ui      -> {common, otl};
  common  -> data;
  data    -> syntax;
  syntax  -> factory;
  factory -> core;
  core    -> {wxWidgets, boost, pugixml};
  
  test_app     -> {sample, rfw} [style=dashed, color=grey];
  sample       -> del [style=dashed, color=grey];
  test_del     -> {del, doctest} [style=dashed, color=grey];
  test_vcs     -> {vcs, doctest} [style=dashed, color=grey];
  test_stc     -> {stc, doctest} [style=dashed, color=grey];
  test_vi      -> {vi, doctest} [style=dashed, color=grey];
  test_ex      -> {ex, doctest} [style=dashed, color=grey];
  test_ctags   -> {ctags, doctest} [style=dashed, color=grey];
  test_ui      -> {ui, doctest} [style=dashed, color=grey];
  test_common  -> {common, doctest} [style=dashed, color=grey];
  test_data    -> {data, doctest} [style=dashed, color=grey];
  test_syntax  -> {syntax, doctest} [style=dashed, color=grey];
  test_factory -> {factory, doctest} [style=dashed, color=grey];
  test_core    -> {core, doctest} [style=dashed, color=grey];
 }
\enddot
*/
