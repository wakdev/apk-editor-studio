#ifndef ANDROIDFILESYSTEMITEM_H
#define ANDROIDFILESYSTEMITEM_H

#include <QIcon>

class AndroidFileSystemItem
{
public:
    enum Type {
        AndroidFSFile,
        AndroidFSDirectory
    };
    AndroidFileSystemItem(const QString &path, Type type);
    QString getPath() const;
    QString getName() const;
    QIcon getIcon() const;
    Type getType() const;

private:
    QString path;
    QString name;
    QIcon icon;
    Type type;
};

#endif // ANDROIDFILESYSTEMITEM_H
