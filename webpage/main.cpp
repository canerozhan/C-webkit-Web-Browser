#include <QApplication>
#include <QtWebKit/QWebView>

int main(int argc, char **argv){
  QApplication app(argc, argv);
  QWebView *view = new QWebView();


  view->resize(400,800);
  view->load(QUrl("https://filmsbykris.com"));
  view->show();

  return app.exec();
}

