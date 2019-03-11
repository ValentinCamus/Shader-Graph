#ifndef SHADERGRAPH_NODEGRAPHICSVIEW_H
#define SHADERGRAPH_NODEGRAPHICSVIEW_H
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QVBoxLayout>

#include <nodes/NodeData>
#include <nodes/FlowScene>
#include <nodes/FlowView>
#include <nodes/ConnectionStyle>
#include <nodes/TypeConverter>
#include <nodes/DataModelRegistry>
#include <nodes/ConnectionStyle>

#include "../core/Core.h"

// using QtNodes::DataModelRegistry;
// using QtNodes::FlowScene;
// using QtNodes::FlowView;
// using QtNodes::ConnectionStyle;

class NodeGraphicsView : public QtNodes::FlowView{
  Q_OBJECT
public:

  NodeGraphicsView(QWidget *parent = Q_NULLPTR);

  NodeGraphicsView(QtNodes::FlowScene *scene, QWidget *parent = Q_NULLPTR);

protected:
  void mousePressEvent(QMouseEvent *event) override ;


};


#endif // SHADERGRAPH_NODEGRAPHICSVIEW_H
